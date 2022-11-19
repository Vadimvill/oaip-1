#include <stdio.h>
#include<stdlib.h>
#include "array.h"
#include "input.h"
#include "output.h"

int main()
{
	int row;
	input_array_size(&row);
	int** array;
	array_memory_allocate(row,1,&array);
	printf("Enter the elements of array\n");
	input_array(row,&array);
	output_array(row,&array);
	array_delete_max_elements(row,&array);
	printf("\nThe result is:\n");
	output_array(row,&array);
	array_free(row, array);

}	
