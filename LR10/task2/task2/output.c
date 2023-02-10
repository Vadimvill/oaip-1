#include "output.h"

void file_output(FILE* file)
{
	char buff;
	fseek(file, 0, SEEK_SET);
	buff = fgetc(file);
	while (!feof(file))
	{
		printf("%c", buff);
		buff = fgetc(file);
	}


}
