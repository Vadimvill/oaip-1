#include "choice.h"


int choice_switch(const int choice, int* size, int* result, int* swap1, int* swap2, int* counter, int* sub_priority, students** queue, students** passed)
{
	switch (choice)
	{
	case 1:                                                         //start
		output_start(queue);
		input_result(&result);
		result_check(result, size, counter, queue, passed);
		break;

	case 2:                                                         //swap
		output_students_list(*size, queue);
		printf("Enter 2 student numbers you want to swap:\n ");
		input_swap(swap1, swap2, *size);
		choice_swap(*swap1, *swap2, queue);
		break;

	case 3:                                                         //current list
		output_students_list(*size, queue);
		break;

	case 4:                                                         //add 
		input_initials(size, queue);
		sort_student_list(*size, *sub_priority, queue);
		break;

	case 5:														    //change priority
		output_priority_subgroup();
		input_priority_subgroup(sub_priority);
		sort_student_list(*size, *sub_priority, queue);

	default:
		return 0;
		break;
	}
}

void choice_swap(const int swap1,const int swap2, students** queue)
{
	char* temp_name, * temp_last_name;
	int temp_subgroup;

	memory_array_allocate(&temp_name);
	memory_array_allocate(&temp_last_name);

	strcpy(temp_last_name, (*queue)[swap1 - 1].last_name);
	strcpy(temp_name, (*queue)[swap1 - 1].name);
	temp_subgroup = (*queue)[swap1 - 1].subgroup;

	strcpy((*queue)[swap1 - 1].last_name, (*queue)[swap2 - 1].last_name);
	strcpy((*queue)[swap1 - 1].name, (*queue)[swap2 - 1].name);
	(*queue)[swap1 - 1].subgroup = (*queue)[swap2 - 1].subgroup;

	strcpy((*queue)[swap2 - 1].last_name, temp_last_name);
	strcpy((*queue)[swap2 - 1].name, temp_name);
	(*queue)[swap2 - 1].subgroup = temp_subgroup;

	free(temp_last_name);
	free(temp_name);
}



