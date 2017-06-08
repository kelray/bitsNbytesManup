/* 
 * File:   bitsNbytesManup.c
 * Author: Karim El-Rayes
 * Created on August 19, 2016
 * Modified: June 8, 2017
 * Disclaimer: this code is available for public use 
 * without any responsibility or liability on on the code developer.
 * You can distribute and share the code with anyone without any prior permissions.
 */
//This is optimized version of bitsNbytesManup library for bitwise operations on bytes
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bitsNbytesManup.h"

//Two bytes concatenation function
//unsigned int ByteCat2(unsigned char lowByte, unsigned char highByte, unsigned int PlacestoShift)
unsigned int ByteCat2(unsigned char lowByte, unsigned char highByte)
{
	unsigned int value = 0;
	value = highByte << 8;
	value = value | lowByte;
	return value;
}

//Three bytes concatenation function
unsigned int ByteCat3(unsigned char lowByte, unsigned char middleByte, unsigned char highByte)
{
	unsigned int value = 0;
	value = highByte << 8;
	value = (value | middleByte) << 8;
	value = value | lowByte;
	return value;
}

//Four bytes concatenation function
unsigned int ByteCat4(unsigned char Byte0, unsigned char Byte1, unsigned char Byte2, unsigned char Byte3)
{
	
	unsigned int value = 0;
	value = Byte3 << 8;
	value = (value | Byte2) << 8;
	value = (value | Byte1) << 8;
	value = value | Byte0;
	return value;
}

//Check if bit is 0 or 1
bool CheckBit(unsigned int number, unsigned int position)
{
	unsigned int temp = 0;
	unsigned int comp = 0x01;
	bool value = false;

	temp = number >> position;
	if(temp & comp)
		value = true;
	else
		value = false;
	return value;
}

//Sets a specific bit to 1
unsigned int SetBit(unsigned int number, unsigned int position)
{
	unsigned int temp = 0x01;
	unsigned int value = 0; 

	temp = temp << position;
	value = temp | number;
	return value;
}

//Resets a specific bit to 0
unsigned int ResetBit(unsigned int number, unsigned int position)
{
	unsigned int temp = 0x01;
	unsigned int value = 0; 

	temp = ~(temp << position);
	//temp = temp & 0xff;
	value = temp & number;
	return value;
}

//Get the Two's complement of a number
unsigned int TwoComplement(unsigned int number, unsigned int SizeInBits)
{
	unsigned int value = 0;
	value = ~number;
	value = (value + 0x01) << 32-SizeInBits;	//shift right to remove the extra 1's, SizeInBits can be any value between 0 and 32
	value = value >> 32-SizeInBits;				//shift left to return the number to LSB position
	return value;
}

//Convert number to binary
//unsigned int* Conv2Bin(unsigned int number, unsigned int SizeInBits)
char* Conv2Bin(unsigned int number, unsigned int SizeInBits)//, static char *storageArray)
{
	unsigned int temp = 0;
	unsigned int comp = 1;
	bool value = false;
	unsigned int num = 0;
	unsigned int count = 0;
	unsigned int BinArray[32] = {0};
	static char *BinValue;
	static char *storageArray;

	storageArray = (char*) calloc(SizeInBits, sizeof(char));
	for(count = 0; count < SizeInBits; count++)
	{
		value = CheckBit(number, count);
		if(value)
			storageArray[count] = '1';
		else if(value != true)
			storageArray[count] = '0';
	}
	storageArray[SizeInBits] = '\0';
	return storageArray;
}

void SplitInt16(int num, unsigned char *Buffer)
{
	Buffer[0] = num;
	Buffer[1] = (num >> 8);
}

//Split int 32bits to four bytes, returns four bytes
void SplitInt32(int num, unsigned char* Buffer)
{
	Buffer[0] = num;
	Buffer[1] = (num >> 8);
	Buffer[2] = (num >> 16);
	Buffer[3] = (num >> 24);
}