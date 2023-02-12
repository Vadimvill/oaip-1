#include "output.h"

void file_output(FILE* file)
{
	fseek(file, 0, SEEK_END);
	int len_of_file = ftell(file);
	char* buff = (char*)malloc(len_of_file);
	fseek(file, 0, SEEK_SET);
	fread(buff, len_of_file, 1, file);
	buff[len_of_file-1] = '\0';
	puts(buff);
	free(buff);
}
