Overview
========
The mbedTLS SelfTest program performs cryptographic algorithm testing and prints results to the
terminal.


SDK version
===========
- Version: 2.16.000

Toolchain supported
===================
- IAR embedded Workbench  9.60.1
- GCC ARM Embedded  13.2.1
- MCUXpresso  11.10.0
- Keil MDK  5.39.0

Hardware requirements
=====================
- Micro USB cable
- FRDM-RW612 board
- Personal Computer

Board settings
==============
No special settings are required.

Prepare the Demo
================
1.  Connect a micro USB cable between the PC host and the MCU-Link USB port (J10) on the board.
2.  Open a serial terminal with the following settings:
    - 115200 baud rate
    - 8 data bits
    - No parity
    - One stop bit
    - No flow control
3.  Download the program to the target board.
4.  Launch the debugger in your IDE to begin running the example.

Running the demo
================
When the demo runs successfully, the terminal will display similar information like the following:

mbedTLS version 2.28.5
fsys=260000000
Using following implementations:
  SHA: ELS HW accelerated SHA256 and SHA512
  AES: ELS HW accelerated
  AES GCM: ELS HW accelerated
  DES: Software implementation
  Asymmetric cryptography: PKC HW accelerated
  MD5 test #1: passed
  MD5 test #2: passed
  MD5 test #3: passed
  MD5 test #4: passed
  MD5 test #5: passed
  MD5 test #6: passed
  MD5 test #7: passed

  SHA-1 test #1: passed
  SHA-1 test #2: passed
  SHA-1 test #3: passed

  SHA-224 test #1: passed
  SHA-224 test #2: passed
  SHA-224 test #3: passed
  SHA-256 test #1: passed
  SHA-256 test #2: passed
  SHA-256 test #3: passed

  SHA-384 test #1: passed
  SHA-384 test #2: passed
  SHA-384 test #3: passed
  SHA-512 test #1: passed
  SHA-512 test #2: passed
  SHA-512 test #3: passed

  AES note: built-in implementation.
  AES-ECB-128 (dec): passed
  AES-ECB-128 (enc): passed
  AES-ECB-192 (dec): passed
  AES-ECB-192 (enc): passed
  AES-ECB-256 (dec): passed
  AES-ECB-256 (enc): passed

  AES-CBC-128 (dec): passed
  AES-CBC-128 (enc): passed
  AES-CBC-192 (dec): passed
  AES-CBC-192 (enc): passed
  AES-CBC-256 (dec): passed
  AES-CBC-256 (enc): passed

  AES-CFB128-128 (dec): passed
  AES-CFB128-128 (enc): passed
  AES-CFB128-192 (dec): passed
  AES-CFB128-192 (enc): passed
  AES-CFB128-256 (dec): passed
  AES-CFB128-256 (enc): passed

  AES-OFB-128 (dec): passed
  AES-OFB-128 (enc): passed
  AES-OFB-192 (dec): passed
  AES-OFB-192 (enc): passed
  AES-OFB-256 (dec): passed
  AES-OFB-256 (enc): passed

  AES-CTR-128 (dec): passed
  AES-CTR-128 (enc): passed
  AES-CTR-128 (dec): passed
  AES-CTR-128 (enc): passed
  AES-CTR-128 (dec): passed
  AES-CTR-128 (enc): passed

  AES-XTS-128 (dec): passed
  AES-XTS-128 (enc): passed
  AES-XTS-128 (dec): passed
  AES-XTS-128 (enc): passed
  AES-XTS-128 (dec): passed
  AES-XTS-128 (enc): passed

  GCM note: built-in implementation.
  AES-GCM-128 #0 (enc): passed
  AES-GCM-128 #0 (dec): passed
  AES-GCM-128 #0 split (enc): passed
  AES-GCM-128 #0 split (dec): passed
  AES-GCM-128 #1 (enc): passed
  AES-GCM-128 #1 (dec): passed
  AES-GCM-128 #1 split (enc): passed
  AES-GCM-128 #1 split (dec): passed
  AES-GCM-128 #2 (enc): passed
  AES-GCM-128 #2 (dec): passed
  AES-GCM-128 #2 split (enc): passed
  AES-GCM-128 #2 split (dec): passed
  AES-GCM-128 #3 (enc): passed
  AES-GCM-128 #3 (dec): passed
  AES-GCM-128 #3 split (enc): passed
  AES-GCM-128 #3 split (dec): passed
  AES-GCM-128 #4 (enc): passed
  AES-GCM-128 #4 (dec): passed
  AES-GCM-128 #4 split (enc): passed
  AES-GCM-128 #4 split (dec): passed
  AES-GCM-128 #5 (enc): passed
  AES-GCM-128 #5 (dec): passed
  AES-GCM-128 #5 split (enc): passed
  AES-GCM-128 #5 split (dec): passed
  AES-GCM-192 #0 (enc): passed
  AES-GCM-192 #0 (dec): passed
  AES-GCM-192 #0 split (enc): passed
  AES-GCM-192 #0 split (dec): passed
  AES-GCM-192 #1 (enc): passed
  AES-GCM-192 #1 (dec): passed
  AES-GCM-192 #1 split (enc): passed
  AES-GCM-192 #1 split (dec): passed
  AES-GCM-192 #2 (enc): passed
  AES-GCM-192 #2 (dec): passed
  AES-GCM-192 #2 split (enc): passed
  AES-GCM-192 #2 split (dec): passed
  AES-GCM-192 #3 (enc): passed
  AES-GCM-192 #3 (dec): passed
  AES-GCM-192 #3 split (enc): passed
  AES-GCM-192 #3 split (dec): passed
  AES-GCM-192 #4 (enc): passed
  AES-GCM-192 #4 (dec): passed
  AES-GCM-192 #4 split (enc): passed
  AES-GCM-192 #4 split (dec): passed
  AES-GCM-192 #5 (enc): passed
  AES-GCM-192 #5 (dec): passed
  AES-GCM-192 #5 split (enc): passed
  AES-GCM-192 #5 split (dec): passed
  AES-GCM-256 #0 (enc): passed
  AES-GCM-256 #0 (dec): passed
  AES-GCM-256 #0 split (enc): passed
  AES-GCM-256 #0 split (dec): passed
  AES-GCM-256 #1 (enc): passed
  AES-GCM-256 #1 (dec): passed
  AES-GCM-256 #1 split (enc): passed
  AES-GCM-256 #1 split (dec): passed
  AES-GCM-256 #2 (enc): passed
  AES-GCM-256 #2 (dec): passed
  AES-GCM-256 #2 split (enc): passed
  AES-GCM-256 #2 split (dec): passed
  AES-GCM-256 #3 (enc): passed
  AES-GCM-256 #3 (dec): passed
  AES-GCM-256 #3 split (enc): passed
  AES-GCM-256 #3 split (dec): passed
  AES-GCM-256 #4 (enc): passed
  AES-GCM-256 #4 (dec): passed
  AES-GCM-256 #4 split (enc): passed
  AES-GCM-256 #4 split (dec): passed
  AES-GCM-256 #5 (enc): passed
  AES-GCM-256 #5 (dec): passed
  AES-GCM-256 #5 split (enc): passed
  AES-GCM-256 #5 split (dec): passed

  CCM-AES #1: passed
  CCM-AES #2: passed
  CCM-AES #3: passed

  AES 128 CMAC subkey #1: passed
  AES 128 CMAC subkey #2: passed
  AES 128 CMAC subkey #3: passed
  AES 128 CMAC subkey #4: passed
  AES 128 CMAC #1: passed
  AES 128 CMAC #2: passed
  AES 128 CMAC #3: passed
  AES 128 CMAC #4: passed
  AES 256 CMAC subkey #1: passed
  AES 256 CMAC subkey #2: passed
  AES 256 CMAC subkey #3: passed
  AES 256 CMAC subkey #4: passed
  AES 256 CMAC #1: passed
  AES 256 CMAC #2: passed
  AES 256 CMAC #3: passed
  AES 256 CMAC #4: passed
  AES CMAC 128 PRF #0: passed
  AES CMAC 128 PRF #1: passed
  AES CMAC 128 PRF #2: passed

  Poly1305 test 0 passed
  Poly1305 test 1 passed

  Base64 encoding test: passed
  Base64 decoding test: passed

  MPI test #1 (mul_mpi): passed
  MPI test #2 (div_mpi): passed
  MPI test #3 (exp_mod): passed
  MPI test #4 (inv_mod): passed
  MPI test #5 (simple gcd): passed

  RSA key validation: passed
  PKCS#1 encryption : passed
  PKCS#1 decryption : passed
  PKCS#1 data sign  : passed
  PKCS#1 sig. verify: passed

  X.509 certificate load: passed
  X.509 signature verify: passed

  HMAC_DRBG (PR = True) : passed
  HMAC_DRBG (PR = False) : passed

  ECP SW test #1 (constant op_count, base point G): passed
  ECP SW test #2 (constant op_count, other point): passed

  ENTROPY test: passed

  PBKDF2 (SHA1) #0: passed
  PBKDF2 (SHA1) #1: passed
  PBKDF2 (SHA1) #2: passed
  PBKDF2 (SHA1) #3: passed
  PBKDF2 (SHA1) #4: passed
  PBKDF2 (SHA1) #5: passed

  Executed 17 test suites

  [ All tests PASS ]

  
