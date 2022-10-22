#include "choice.h"


int choice_switch(const int* choice, int* size, int* result, int* swap1, int* swap2,int arr_result[],int* counter)
{
	switch (*choice)
	{
	case 1:                                                         //start
		output_start();
		input_result(&result);
		result_check(result, size, arr_result, counter);
		break;

	case 2:                                                       //swap
		output_students_list(*size);
		printf("enter 2 student numbers you want to swap:\n ");
		input_swap(swap1, swap2, size);
		choice_swap(swap1, swap2);
		break;

	case 3:                                                         //current list
		output_students_list(*size);
		break;

	case 4:                                                         // add 
		input_initials(size);
		break;

	default:
		return 0;
		break;
	}
}

void choice_swap(int *swap1, int* swap2)
{
	char *temp_name, *temp_last_name;

	memory_allocate(&temp_name);
	memory_allocate(&temp_last_name);

	strcpy(temp_last_name, students_queue[*swap1 - 1].last_name);
	strcpy(temp_name, students_queue[*swap1 - 1].name);

	strcpy(students_queue[*swap1 - 1].last_name, students_queue[*swap2 - 1].last_name);
	strcpy(students_queue[*swap1 - 1].name, students_queue[*swap2 - 1].name);

	strcpy(students_queue[*swap2 - 1].last_name, temp_last_name);
	strcpy(students_queue[*swap2 - 1].name, temp_name);
	//free
}



