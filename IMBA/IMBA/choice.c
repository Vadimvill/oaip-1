#include "choice.h"


int choice_switch(const int choice, int* size, int* result, int* swap1, int* swap2, int* counter,int* sub_priority)
{
	switch (choice)
	{
	case 1:                                                         //start
		output_start();
		input_result(&result);
		result_check(result, size, counter);
		break;

	case 2:                                                         //swap
		output_students_list(*size);
		printf("Enter 2 student numbers you want to swap:\n ");
		input_swap(swap1, swap2, *size);
		choice_swap(*swap1, *swap2);
		break;

	case 3:                                                         //current list
		output_students_list(*size);
		break;

	case 4:                                                         //add 
		input_initials(size);
		sort_student_list(*size, *sub_priority);
		break;

	case 5:														    //change priority
		output_priority_subgroup();
		input_priority_subgroup(sub_priority);
		sort_student_list(*size, *sub_priority);

	default:
		return 0;
		break;
	}
}

void choice_swap(const int swap1,const int swap2)
{
	char* temp_name, * temp_last_name;
	int temp_subgroup;

	memory_allocate(&temp_name);
	memory_allocate(&temp_last_name);

	strcpy(temp_last_name, students_queue[swap1 - 1].last_name);
	strcpy(temp_name, students_queue[swap1 - 1].name);
	temp_subgroup = students_queue[swap1 - 1].subgroup;

	strcpy(students_queue[swap1 - 1].last_name, students_queue[swap2 - 1].last_name);
	strcpy(students_queue[swap1 - 1].name, students_queue[swap2 - 1].name);
	students_queue[swap1 - 1].subgroup = students_queue[swap2 - 1].subgroup;

	strcpy(students_queue[swap2 - 1].last_name, temp_last_name);
	strcpy(students_queue[swap2 - 1].name, temp_name);
	students_queue[swap2 - 1].subgroup = temp_subgroup;

	//free
}



