#include "arry.h"

void  arry_del_elements(int* size, int** arry)
{
	for (int i = 0; i < *size; i++)
	{
		if ((*arry)[i] % 11 == 0)
		{
			(*size)--;
			for (int j = i; j < (*size); j++)
			{
				(* arry)[j] = (* arry)[j + 1];
			}
			*arry = (int*)realloc(*arry, (*size) * sizeof(int));

		}
	}
}
