#pragma once

#include<math.h>
#include<string.h>

#define ALPHABET_ENG "abcdefghijklmnopqrstuvwxyz";

enum choice
{
	DECODE_WITH_KEY,
	ENCODE,
};

void encode_or_decode_string_by_gronsfeld(char* string_to_encode, int key,int choice);
int find_key_length(int key);
