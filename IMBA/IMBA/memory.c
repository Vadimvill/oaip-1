#include "memory.h"


void memory_allocate(char* arr[])
{ 
	*arr  = (char*)calloc(1, 1);
}

void memory_delete(char* arr[])
{
	free(*arr);
}
