#include<stdio.h>
#include"input.h"
#include"output.h"

int  main(int argc,char** argv)
{
	FILE* kurinoe = NULL;
	fopen_s(&kurinoe, "1.txt", "rb");
	//fwrite("123", 1, 3, kurinoe);
	find_first_non_ascending_element(kurinoe);
	file_output(kurinoe);

	if (argc >= 2)
	{
		file_init(&kurinoe, argc, argv);
		file_output(kurinoe);
		find_first_non_ascending_element(kurinoe);
		file_output(kurinoe);
		fclose(kurinoe);
	}
}