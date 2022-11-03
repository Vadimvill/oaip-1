#include "output.h"

void output_arry(const int rows, const int cols, int*** arry)
{
	for (int i = 0; i < rows; i++) 
	{
		for (int j = 0; j < cols; j++)
		{
			printf("%d ", (*arry)[i][j]);
		}
				printf("\n");
	}
}
