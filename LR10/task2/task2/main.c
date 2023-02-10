#include<stdio.h>
#include"compare.h"
#include"output.h"
#include"input.h"

int main(int argc, char** argv)
{
	char char_to_compare = argv[2][0];
	FILE* kurinoe = NULL;

	if (argc >= 2)
	{
		file_init(&kurinoe, argc, argv);
		file_output(kurinoe);
		char_compare(kurinoe, char_to_compare);
		printf("\n");
		
		fclose(kurinoe);
	}


}
