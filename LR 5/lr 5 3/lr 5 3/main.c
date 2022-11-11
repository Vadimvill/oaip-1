#include<stdio.h>
#include"input.h"
#include"array.h"
#include"output.h"

int main()
{
	int row, col;
	int** array;
	input_array_size(&row, &col);
	array_memoey_allocate(row, col, &array);
	input_array(row, col, &array);
	output_array(row, col, &array);
	array_del_elements(&row, col, &array);
	printf("The result is: \n");
	output_array(row, col, &array);
	array_free(row, array);

}