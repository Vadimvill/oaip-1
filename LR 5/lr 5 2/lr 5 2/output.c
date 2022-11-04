#include "output.h"

void output_arry(const int row, int*** arry)
{
	for (int i = 0; i < row ; i++)
	{
		int j = 0;
		while ((*arry)[i][j] != 0)
		{
			printf("%d ", (*arry)[i][j]);
			j++;
		}
		printf("\n");
		

	}
	
}
