#include<stdio.h>
#include"input.h"
#include"arry.h"
#include"output.h"

int main()
{
	int row, col;
	int** arry;
	input_arry_size(&row, &col);
	arry_memoey_allocate(row, col, &arry);
	input_arry(row, col, &arry);
	output_arry(row, col, &arry);
	arry_del_elements(&row, col, &arry);
	printf("The result is: \n");
	output_arry(row, col, &arry);
	arry_free(row, arry);

}