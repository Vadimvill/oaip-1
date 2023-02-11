#include<stdio.h>
#include<stdlib.h>
#include"input.h"
#include"output.h"
#include"reverse.h"

int main(int argc, char** argv)
{
	int start_point = atoi(argv[2]);
	int end_point = atoi(argv[3]);
	FILE* kurinoe = NULL;

	if (argc >= 4)
	{
		file_init(&kurinoe, argc, argv);
		file_output(kurinoe);
		string_reverse(kurinoe, start_point, end_point);
		file_output(kurinoe);
		fclose(kurinoe);
	}
}