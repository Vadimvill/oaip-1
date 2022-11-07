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
	int choice = 0, size = 0, result, swap1, swap2, sub_priority, counter = 0;   //counter - number of passed students
	students* queue;
	students* passed;

	memory_strcut_allocate(size+1, &queue);
	memory_strcut_allocate(size+1, &passed);
	output_priority_subgroup();
	input_priority_subgroup(&sub_priority);
	input_initials(&size, &queue);
	sort_student_list(size, sub_priority, &queue);
	output_students_list(size, &queue);
	while (size)
	{
		output_choice();
		input_choice(&choice);
		choice_switch(choice, &size, &result, &swap1, &swap2, &counter, &sub_priority, &queue, &passed);
	}
	output_student_passed(counter, &passed);
	free(queue);
	free(passed);
}








