#include "input.h"

void input_array_size(int* size)
{
	printf("Enter the array size \n");
	while (scanf_s("%d", size) == 0 || *size < 0 || getchar() != '\n')
	{
		printf("Wrong input.\n");
		rewind(stdin);
	}
}

void input_array(const int size,int** array)
{
	for (int  i = 0; i < size; i++)
	{
		while (scanf_s("%d", &(*array)[i]) == 0 || getchar() != '\n')
		{
			printf("Wrong input.\n");
			rewind(stdin);
		}
	}
}

