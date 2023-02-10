#include "output.h"

void file_output(FILE* file)
{ 
		char buff[255];
		fseek(file, 0, 0);
		fgets(buff, 255, file);
		printf("%s", buff);
	
}
