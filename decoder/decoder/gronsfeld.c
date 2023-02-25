#include "gronsfeld.h"

char* alphabet_eng = ALPHABET_ENG;


void gronsfeld(char* string_to_encode, int key,int mode)
{
	int i = 0;
	int counter = 1;
	int key_length = find_key_length(key);
	while (string_to_encode[i] != '\0')
	{
		int key_digit = (int)(key / pow(10, key_length - counter)) % 10;
		counter++;
		if (counter > key_length)
			counter = 1;

		int count = 0;
			while (string_to_encode[i] != alphabet_eng[count])
			{
				count++;
			}

			switch (mode)
			{
			case DECODE_WITH_KEY:
				if(count > key_digit)
				string_to_encode[i] = alphabet_eng[count - key_digit];
				else
					string_to_encode[i] = alphabet_eng[strlen(alphabet_eng) - (key_digit- count)];
				break;

			case ENCODE:
				string_to_encode[i] = alphabet_eng[(count + key_digit) % strlen(alphabet_eng)];
			}

			i++;
	}
}

int find_key_length(int key)
{
	int length = 0;
	while (key /= 10)
	{
		length++;
	}
	return ++length;
}
