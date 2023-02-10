#include "compare.h"

void char_compare(FILE* file, char char_to_compare)
{
	fseek(file, 0, SEEK_SET);
	int counter = 0;
	char symbol;
	while ((symbol = fgetc(file)) != EOF)
	{
		if (symbol == char_to_compare)
			counter++;
	}
	printf("\n%d", counter);
}
