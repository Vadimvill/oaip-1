#pragma once

#include<math.h>
#include<string.h>

#define ALPHABET_ENG "abcdefghijklmnopqrstuvwxyz";

enum choice
{
	DECODE_WITH_KEY,
	DECODE_WHITHOUT_KEY,
	ENCODE,
};


/* mode settings:
* DECODE WITH KEY - 0,
* DECODE WITHOUT KEY -1
* ENCODE - 2.
* 
* NOTE: if you want to decode without key set the key = NULL 
*/
void gronsfeld(char* string_to_encode, int key,int mode);
int find_key_length(int key);
