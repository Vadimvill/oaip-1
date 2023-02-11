#include "reverse.h"

void string_reverse(FILE* file,int start_point, int end_pioint)
{
	if (end_pioint <= _filelength(_fileno(file)) && end_pioint >= start_point)
	{
		char buff1,buff2;
		fseek(file, end_pioint-1, SEEK_SET);
		buff1=fgetc(file);
		fseek(file, start_point-1, SEEK_SET);
		buff2 = fgetc(file);
		fseek(file, -1, SEEK_CUR);
		fprintf(file, "%c", buff1);
		fseek(file, end_pioint - 1, SEEK_SET);
		fprintf(file, "%c", buff2);
		
		string_reverse(file, start_point+1, end_pioint-1);

	}
}

