/* 
 * File:   bitsNbytesManup.h
 * Author: Karim El-Rayes
 * Version: 1.1
 * Created on August 19, 2016
 * Latest update on April 10, 2017
 * Disclaimer: this code is available for public use 
 * without any responsibility or liability on on the code developer.
 * You can distribute and share the code with anyone without any prior permissions.
 *  * V1.1, March 18, 2017: SplitInt16() and SplitInt32() added
 */

#ifndef BITSNBYTESMANUP_H_   /* Include guard */
#define BITSNBYTESMANUP_H_

#define ByteSize 8
#define DoubleByteSize 16
#define WordSize 32
#define DoubleWordSize 64

unsigned int ByteCat2(unsigned char lowByte, unsigned char highByte);
unsigned int ByteCat3(unsigned char lowByte, unsigned char middleByte, unsigned char highByte);
unsigned int ByteCat4(unsigned char Byte0, unsigned char Byte1, unsigned char Byte2, unsigned char Byte3);
int CheckBit(unsigned int number, unsigned int position);
unsigned int SetBit(unsigned int number, unsigned int position);
unsigned int ResetBit(unsigned int number, unsigned int position);
unsigned int TwoComplement(unsigned int number, unsigned int SizeInBits);
unsigned char* SplitInt16(int num);
unsigned char* SplitInt32(int num);

#endif