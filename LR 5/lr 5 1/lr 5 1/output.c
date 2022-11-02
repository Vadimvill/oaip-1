#include "output.h"

void output_arry(const int size,int** arry) 
{
	printf("The result is:\n");
	for (int i = 0; i < size; i++)
	{
		printf("%d\t",	(* arry)[i]);
	}
}
