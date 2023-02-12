#include<stdio.h>
#include"input.h"
#include"output.h"
#include"fileFunc.h"

int  main(int argc,char** argv)
{
	FILE* kurinoe = NULL;
	
	if (argc >= 2)
	{
		file_init(&kurinoe, argc, argv);
		file_output(kurinoe);
		find_first_non_ascending_element(kurinoe);
		file_output(kurinoe);
		fclose(kurinoe);
	}
}