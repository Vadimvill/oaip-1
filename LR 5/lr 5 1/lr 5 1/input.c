#include "input.h"

void input_arry_size(int* size)
{
	printf("Enter the arry size \n");
	while (scanf_s("%d", size) == 0 || *size < 0 || getchar() != '\n')
	{
		printf("Wrong input.\n");
		rewind(stdin);
	}
}

void input_arry(const int size,int* arry)
{
	for (int  i = 0; i < size; i++)
	{
		while (scanf_s("%d", &arry[i]) == 0 || getchar() != '\n')
		{
			printf("Wrong input.\n");
			rewind(stdin);
		}
	}
}

