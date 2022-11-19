#include<stdio.h>
#include<stdlib.h>
#include"array.h"
#include"input.h"
#include"output.h"
#include"sort.h"



int main()
{
	int** array;
	int row;
	int col;
	printf("Enter the array rows \n");
	input_array_size(&row);
	printf("Enter the array cols \n");
	input_array_size(&col);
	array_memory_allocate(row,col,&array);
	input_array(row, col, &array);
	output_array(row, col, &array);
	printf("\nThe result is: \n");
	merge_sort(&array, row, col);
	output_array(row, col, &array);
}
