#include <stdio.h>
#include<stdlib.h>
#include "arry.h"
#include "input.h"
#include "output.h"

int main()
{
	int size;
	input_arry_size(&size);
	int* arry = (int*)calloc(size,sizeof(int));
	printf("Enter the elements of arry\n");
	input_arry(size, &arry);
	arry_del_elements(&size, &arry);
	output_arry(size,&arry);
	free(arry);
}