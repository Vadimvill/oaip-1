#include<stdio.h>
#include"compare.h"
#include"output.h"
#include"input.h"

int main(int argc, char** argv)
{
	FILE* kurinoe = NULL;

	if (argc >= 3)
	{
		char char_to_compare = argv[2][0];

		file_init(&kurinoe, argc, argv);
		file_output(kurinoe);
		char_compare(kurinoe, char_to_compare);
		fclose(kurinoe);
	}


}
