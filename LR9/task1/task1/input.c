#include"input.h"

void file_init(FILE** file, int argc, char** argv)
{
	int j = 0;
	int i=2;
	fopen_s(file, argv[1], "wb+");

	for (int i = 2; i < argc; i++)
	{
		if (atof(argv[i]) == atoi(argv[i]) && isword(argv[i]))
		{
			fwrite(argv[i], strlen(argv[i]), 1, *file);
			fwrite(" ", 1, 1, *file);
		}
	}

}

int isword(char* str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		if (isalpha(str[i]))
		{
			return 0;
		}
		i++;
	}
	return 1;
}