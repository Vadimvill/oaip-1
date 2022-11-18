#include "output.h"

void output_array(const int rows, const int cols, int*** array)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			printf("%d ", (*array)[i][j]);
		}
		printf("\n");
	}
}