## Cryptography

A simple scheme for encrypting and decrypting data.

The program reads a four-digit integer entered by a user and encrypts it as follows: 
* Replace each digit with the result of adding 7 to the digit and getting the remainder after dividing the new value by 10. 
* Then swap the first digit with the third, and swap the second digit with the fourth.
* Then print the encrypted integer. 

**decrypt.c** takes the encrypted four-digit integer and decrypts it by reversing the encryption scheme to get the original number.