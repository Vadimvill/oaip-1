#include "input.h"

void input_arry_size(int* row)
{
	printf("Enter the arry row \n");
	while (scanf_s("%d", row) == 0 || *row < 0 || getchar() != '\n')
	{
		printf("Wrong input.\n");
		rewind(stdin);
	}
}

void input_arry(const int row,int*** arry)
{
	for (int i = 0; i < row; i++)
	{ 
		int j = 0;
		while (printf("elem[%d][%d] = ",i,j), scanf_s("%d", &(*arry)[i][j]) != 0 && (*arry)[i][j] != 0)
		{
			(*arry) [i] = (int*)realloc( (*arry)[i], (j + 2) * sizeof(int));
			j++;
		}
	}
}


