#include "input.h"

void input_array_size(int* row,int* col)
{
	printf("Enter the array rows \n");
	while (scanf_s("%d", row) == 0 || *row < 0 || getchar() != '\n')
	{
		printf("Wrong input.\n");
		rewind(stdin);
	}
	printf("Enter the array cols \n");
	while (scanf_s("%d", col) == 0 || *col < 0 || getchar() != '\n')
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
