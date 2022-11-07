#include "memory.h"

void memory_array_allocate(char** arr)
{ 
	*arr  = (char*)malloc(1024);
}

void memory_delete(char* arr[])
{
	free(*arr);
}

void memory_strcut_allocate(const int struct_size, students** input)
{
	*input = (struct students*)malloc(struct_size * sizeof(students));
}

void memory_struct_reallloc(const int struct_size, students** input)
{
	*input = (struct students*)realloc(*input,struct_size * sizeof(students));
}
