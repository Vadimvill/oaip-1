#include "input.h"

void file_init(FILE** file, int argc, char** argv)
{
	if (argc >= 3)
	{
		fopen_s(file, argv[1], "w+");

		for (int i = 3; i < argc; i++)
		{
			fprintf(*file, "%s ", argv[i]);
		}
	}
}

