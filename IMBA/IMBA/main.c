#include<stdio.h>
#include<stdlib.h>
#include"output.h"
#include"input.h"
#include"choice.h"
#include"memory.h"
#include"sort.h"
#include"studentStruct.h"

int main()
{ 
	int choice = 0, size = 0, result, swap1, swap2, sub_priority, counter = 0;
	
	output_priority_subgroup();
	input_priority_subgroup(&sub_priority);
	input_initials(&size);
	sort_student_list(size,sub_priority);
	output_students_list(size); 
	while (size)
	{        
		output_choice();
		input_choice(&choice);
		choice_switch(choice, &size, &result, &swap1, &swap2, &counter,&sub_priority);
	}
	output_result();
	//free
}








