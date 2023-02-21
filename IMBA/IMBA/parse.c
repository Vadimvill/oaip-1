#include"parse.h"

void parse_initial_from_file(int* size_of_queue, students** queue, FILE* file)
{
	fseek(file, 0, SEEK_SET);
	for (; (*size_of_queue) < 20; (*size_of_queue)++)
	{
		memory_string_allocate(&(*queue)[*size_of_queue].last_name);
		memory_string_allocate(&(*queue)[*size_of_queue].name);
		memory_string_allocate(&(*queue)[*size_of_queue].surname);
		find_initials_start_position(file);
		parse_initials(file, &(*queue)[*size_of_queue]);
		(*queue)[*size_of_queue].subgroup = ((*size_of_queue) <= 10) ? FIRST : SECOND;
		memory_struct_reallloc((*size_of_queue) + 2, queue);
	}
}

void find_initials_start_position(FILE* file)
{
	int counter = 0;
	char buffer;
	char* mask = "<td class=\"s13\" dir=\"ltr\">";
	while (!feof(file))
	{
		buffer = fgetc(file);
		if (buffer == mask[counter])
		{
			counter++;
		}
		else
		{
			counter = 0;
		}

		if (counter == strlen(mask))
		{
			break;
		}
		
	}
}

void parse_initials(FILE* file,students* queue)
{
	int counter = 0;
	char buffer;
	while ((buffer = fgetc(file)) != ' ')
	{
		queue->last_name[counter] = buffer;	
		counter++;
	}
	queue->last_name[counter] = '\0';

	counter = 0;
	while ((buffer = fgetc(file)) != ' ')
	{
		queue->name[counter] = buffer;
		counter++;
	}
	queue->name[counter] = '\0';

	counter = 0;
	while ((buffer = fgetc(file)) != '<')
	{
		queue->surname[counter] = buffer;
		counter++;
	}
	queue->surname[counter] = '\0';
}



