/* 
 * File:   bitsNbytesManup.h
 * Author: Karim El-Rayes
 * Created on August 19, 2016
 * Modified on June 8, 2017
 * Disclaimer: this code is available for public use 
 * without any responsibility or liability on on the code developer.
 * You can distribute and share the code with anyone without any prior permissions.
 */

#ifndef BITSNBYTESMANUP_H_   /* Include guard */
#define BITSNBYTESMANUP_H_

#define ByteSize 8
#define DoubleByteSize 16
#define WordSize 32
#define DoubleWordSize 64

unsigned int ByteCat2(unsigned char lowByte, unsigned char highByte);											//optimized
unsigned int ByteCat3(unsigned char lowByte, unsigned char middleByte, unsigned char highByte);					//optimized
unsigned int ByteCat4(unsigned char Byte0, unsigned char Byte1, unsigned char Byte2, unsigned char Byte3);		//optimized
bool CheckBit(unsigned int number, unsigned int position);
unsigned int SetBit(unsigned int number, unsigned int position);
unsigned int ResetBit(unsigned int number, unsigned int position);
unsigned int TwoComplement(unsigned int number, unsigned int SizeInBits);
char* Conv2Bin(unsigned int number, unsigned int SizeInBits);
void SplitInt16(int num, unsigned char *Buffer);	//optimized
void SplitInt32(int num, unsigned char* Buffer);	//optimized

#endif