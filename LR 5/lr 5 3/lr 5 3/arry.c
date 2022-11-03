#include "arry.h"

void arry_memoey_allocate(const int row, const int col, int*** arry)
{
	*arry = (int**)malloc(row, sizeof(int*));;
	for (int i = 0; i < row; i++)
	{
		(*arry)[i] = (int*)calloc(col, sizeof(int));
	}
}

void arry_del_elements(int* row, const int col, int*** arry)
{
	for (int i = 0; i < (*row); i++)
	{	
		int zero_counter = 0;
		arry_find_cols_with_2_zero(i, col, arry, &zero_counter);
		if (zero_counter >= 2)
		{
			(*row)--;
			for (int j = i; j < (*row); j++)
			{
				for (int k = 0; k < col; k++)
				{
					(*arry)[j][k] = (*arry)[j + 1][k];
				}
			}
			i--;
			(**arry) = (int**)realloc((**arry), (*row) * sizeof(int*));
		}
	}
}

void arry_find_cols_with_2_zero(const int i,const int col,int*** arry,int* zero_counter)
{
	for (int j = 0; j < col; j++)
	{
		if ((*arry)[i][j] == 0)
		{
			(*zero_counter)++;
		}
	}
}
