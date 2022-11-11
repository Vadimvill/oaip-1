#include <stdio.h>
#include<stdlib.h>
#include "array.h"
#include "input.h"
#include "output.h"

int main()
{
	int size;
	input_array_size(&size);
	int* array = (int*)calloc(size,sizeof(int));
	printf("Enter the elements of array\n");
	input_array(size, &array);
	array_del_elements(&size, &array);
	output_array(size,&array);
	free(array);
}