bitsNbytesManup:

This is a collection of bitwise manipulation functions I developed myself for interfacing Analog-to-Digital Converters to microcontrollers and embedded devices. It can contactenate 2, 3 and 4 bytes together to form one integer number, be aware of your system/compiler support of the integer size (16 or 32 bits) otherwise ByteCat3() and ByteCat4() functions won't work properly. 

- unsigned int ByteCat2(unsigned char lowByte, unsigned char highByte);

This function contatenate 2 bytes and returns the output in an unsigned int.

- unsigned int ByteCat3(unsigned char lowByte, unsigned char middleByte, unsigned char highByte);

This function contatenate 3 bytes and returns the output in an unsigned int.

- unsigned int ByteCat4(unsigned char Byte0, unsigned char Byte1, unsigned char Byte2, unsigned char Byte3);

This function contatenate 4 bytes and returns the output in an unsigned int, Byte0 is the least significant byte and Byte 3 is the most significant byte.

- bool CheckBit(unsigned int number, unsigned int position);

Check is a specific bit if it is 0 or 1.
 
- unsigned int SetBit(unsigned int number, unsigned int position);

Sets a specific bit of a number to 1.

- unsigned int ResetBit(unsigned int number, unsigned int position);

Resets a specific bit of a number to 0.

- unsigned int TwoComplement(unsigned int number, unsigned int SizeInBits);

Returns the 2's complement of a number.

Feel free to contact me if any of the APIs isn't working properly.