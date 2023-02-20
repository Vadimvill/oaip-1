#include "choice.h"

int choice_switch(const int choice, int* size_of_queue, int* counter, int* sub_priority, students** queue, students** passed)
{
	switch (choice)
	{
	case START_AN_EXEAM:             
		output_start_an_exam(*queue);
		int result = input_result();
		result_check(result, size_of_queue, counter, queue, passed);
		break;

	case SWAP_STUDENTS:                                                         
		output_students_list(*size_of_queue, *queue);
		printf("Enter 2 student numbers you want to swap:\n ");
		int first_person = input_swap_number(*size_of_queue);
		int second_person = input_swap_number(*size_of_queue);
		choice_swap_students(first_person, second_person, *queue);
		break;

	case OUTPUT_CURRENT_LIST:                                                         
		output_students_list(*size_of_queue, *queue);
		break;
	
	case ADD_STUDENTS:                                                         
		input_initials(size_of_queue, queue);
		sort_student_list(*size_of_queue, *sub_priority, *queue);
		break;

	case CHANGE_PRIORITY:														    
		output_priority_subgroup();
		input_priority_subgroup(sub_priority);
		sort_student_list(*size_of_queue, *sub_priority, *queue);
		break;

	default:
		return 0;
		break;
	}
}

void choice_swap_students(const int first_person, const int second_person, students* queue)
{
	char* temp_name, * temp_last_name;
	int temp_subgroup;

	memory_string_allocate(&temp_name);
	memory_string_allocate(&temp_last_name);

	strcpy(temp_last_name, queue[first_person - 1].last_name);
	strcpy(temp_name, queue[first_person - 1].name);
	temp_subgroup = queue[first_person - 1].subgroup;

	strcpy(queue[first_person - 1].last_name, queue[second_person - 1].last_name);
	strcpy(queue[first_person - 1].name, queue[second_person - 1].name);
	queue[first_person - 1].subgroup = queue[second_person - 1].subgroup;

	strcpy(queue[second_person - 1].last_name, temp_last_name);
	strcpy(queue[second_person - 1].name, temp_name);
	queue[second_person - 1].subgroup = temp_subgroup;

	free(temp_last_name);
	free(temp_name);
}



