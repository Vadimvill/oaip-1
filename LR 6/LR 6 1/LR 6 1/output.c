#include "output.h"

void output_array(const int array_size, int** array)
{
		for (int i = 0; i < array_size; i++)
		{
			printf("%d ", (*array)[i]);
		}
}
