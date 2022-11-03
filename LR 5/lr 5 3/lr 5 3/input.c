#include "input.h"

void input_arry_size(int* row,int* col)
{
	printf("Enter the arry rows \n");
	while (scanf_s("%d", row) == 0 || *row < 0 || getchar() != '\n')
	{
		printf("Wrong input.\n");
		rewind(stdin);
	}
	printf("Enter the arry cols \n");
	while (scanf_s("%d", col) == 0 || *col < 0 || getchar() != '\n')
	{
		printf("Wrong input.\n");
		rewind(stdin);
	}
}

void input_arry(const int row, const int col, int*** arry)
{
	printf("Enter the elemenst of arry\n");
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			while (scanf_s("%d", &(*arry)[i][j]) == 0 || getchar() != '\n')
			{
				printf("Wrong input.\n");
				rewind(stdin);
			}
		}
	}
}
