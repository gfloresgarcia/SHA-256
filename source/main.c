/*
 *  SHA-256 demonstration program
 *
 *  Copyright The Mbed TLS Contributors
 *  SPDX-License-Identifier: Apache-2.0 OR GPL-2.0-or-later
 *  Copyright 2017, 2021-2024 NXP. Not a Contribution
 */

/*******************************************************************************
 * Includes
 ******************************************************************************/

#if !defined(MBEDTLS_CONFIG_FILE)
#include "mbedtls/config.h"
#else
#include MBEDTLS_CONFIG_FILE
#endif

#include "mbedtls/sha256.h"
#include "pin_mux.h"
#include "clock_config.h"
#include "board.h"
#include "fsl_power.h"
#include "fsl_debug_console.h"
#include "mbedtls/version.h"

/*******************************************************************************
 * Definitions
 ******************************************************************************/
#define CORE_CLK_FREQ (CLOCK_GetCoreSysClkFreq())

/*******************************************************************************
 * Prototypes
 ******************************************************************************/
static void SHA256_MbedTLS(const unsigned char *input, size_t len, unsigned char output[32]);
static void PRINT_Hash(const unsigned char hash[32]);

/*******************************************************************************
 * Variables
 ******************************************************************************/

/*******************************************************************************
 * Code
 ******************************************************************************/
//Function to initialize and execute hash function
static void SHA256_MbedTLS(const unsigned char *input, size_t len, unsigned char output[32]) {
    mbedtls_sha256_context ctx;

    //Initialization of context
    mbedtls_sha256_init(&ctx);
    //Execute hashing process with 0 in the second parameter to indicate SHA-256
    mbedtls_sha256_starts(&ctx, 0);
    //Fragment Hash value
    mbedtls_sha256_update(&ctx, input, len);
    //Finish Hash process and store output value
    mbedtls_sha256_finish(&ctx, output);
    //Free context
    mbedtls_sha256_free(&ctx);
}

//Function to print Hash in the console
static void PRINT_Hash(const unsigned char hash[32]) {
    for (int i = 0; i < 32; i++) {
        PRINTF("%02x", hash[i]);
    }
    PRINTF("\n\r");
}

int main(void)
{
    /* Initialize the hardware */
    BOARD_InitBootPins();
    BOARD_InitBootClocks();
    BOARD_InitDebugConsole();

    /* Reset GMDA */
    RESET_PeripheralReset(kGDMA_RST_SHIFT_RSTn);
    POWER_ConfigCauInSleep(false);
    BOARD_InitSleepPinConfig();

    //Message to convert to Hash
    const char *mensaje = "Prueba SHA-256";

    //Array to store Hash value obtained
    unsigned char hash[32];

    //Call function to initialize and execute Hash function
    SHA256_MbedTLS((const unsigned char *)mensaje, strlen(mensaje), hash);

    //Call function to print Hash value
    PRINTF("Input: %s \n\r", mensaje);
    PRINTF("SHA-256: ");
    PRINT_Hash(hash);

    while (1)
    {
        char ch = GETCHAR();
        PUTCHAR(ch);
    }
}
