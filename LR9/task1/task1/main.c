#include"stdafx.h"
#include"input.h"
#include"output.h"

int main(int argc,char** argv)
{
	FILE* kurinoe = NULL;
	if (argc >= 2)
	{
		file_init(&kurinoe, argc, argv);
		file_output(kurinoe);
		fclose(kurinoe);
	}
}