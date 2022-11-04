#include <stdio.h>
#include<stdlib.h>
#include "arry.h"
#include "input.h"
#include "output.h"

int main()
{
	int row;
	input_arry_size(&row);
	int** arry;
	arry_memoey_allocate(row,1,&arry);
	printf("Enter the elements of arry\n");
	input_arry(row,&arry);
	output_arry(row,&arry);
	arry_delete_max_elements(row,&arry);
	printf("\nThe result is:\n");
	output_arry(row,&arry);
	arry_free(row, arry);

}	