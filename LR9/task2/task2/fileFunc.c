#include "fileFunc.h"

void find_first_non_ascending_element(FILE* file)
{
	fseek(file, 0, SEEK_SET);
	char buff[255];
	int ascending_element_pos = 1;
	file_read_element(file, buff);

	if (is_word(buff))
	{
		file_delete_elements(file, ascending_element_pos);
	}

	while (!feof(file))
	{
		float temp = atof(buff);
		file_read_element(file, buff);
		if ((temp > atof(buff)) || (is_word(buff)))
		{
			ascending_element_pos = ftell(file);
			file_delete_elements(file, ascending_element_pos);
			break;
		}
	}
}

void file_read_element(FILE* file, char buff[255])
{
	int i = 0;
	while (((buff[i] = fgetc(file)) != ' ') && buff[i] != EOF)
	{
		i++;
	}
	buff[i] = '\0';
}

void file_delete_elements(FILE* file, int pos)
{
	_chsize(_fileno(file), pos);
}

int is_word(char* str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		if (isalpha(str[i]))
		{
			return 1;
		}
		i++;
	}
	return 0;
}
