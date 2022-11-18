#include "input.h"

void input_array_size(int* array_size)
{
	while (scanf_s("%d", array_size) == 0 || *array_size < 0 || getchar() != '\n')
	{
		printf("Wrong input.\n");
		rewind(stdin);
	}
}

void input_array(const int row, const int col, int*** array)
{
	printf("Enter the elemenst of array\n");
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			while (scanf_s("%d", &(*array)[i][j]) == 0 || getchar() != '\n')
			{
				printf("Wrong input.\n");
				rewind(stdin);
			}
		}
	}
}
