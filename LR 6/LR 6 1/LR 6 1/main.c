#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"array.h"
#include"input.h"
#include"output.h"
#include"sort.h"
#define DEBUG


int main()
{
	int* array;
#ifdef DEBUG
	int* array_debug;
	array_memoey_allocate(10000, &array_debug);
	array_memoey_allocate(10000, &array);
	array_input_debug(10000, &array);
	array_input_debug(10000, &array_debug);
	clock_t start_array = clock();
	insert_sort(10000, &array);
	clock_t end_array = clock();
	float second1 = (float)(end_array) / CLOCKS_PER_SEC;
	clock_t start_array_debug = clock();
	shell_sort_debug(10000, &array_debug);
	clock_t end_array_debug = clock();
	float second2 = (float)(end_array_debug) / CLOCKS_PER_SEC;
	printf("%f\n", second1);
	printf("%f", second2);
	

#else
	int array_size;
	input_array_size(&array_size);
	array_memoey_allocate(array_size, &array);
	input_array(array_size, &array);
	output_array(array_size, &array);
	printf("\nThe result is: \n");
	shell_sort(array_size, &array);
	output_array(array_size, &array);

#endif // DEBUG
	


}