#include<stdio.h>
#include<stdlib.h>
#include"output.h"
#include"input.h"
#include"choice.h"
#include"memory.h"
#include"studentStruct.h"

int main()
{ 
	int choice = 0, size = 0 , result, swap1, swap2, arr_result[50],counter = 0;
	input_initials(&size);
	output_students_list(size);                           
	while (size)
	{        
		output_choice();
		input_choice(&choice);
		choice_switch(&choice, &size, &result, &swap1, &swap2, arr_result,&counter);
	}
	output_result(arr_result);
}








