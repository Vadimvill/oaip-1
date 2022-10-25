#include "output.h"

void output_students_list(const int size)
{
	printf("=====================================================\n"); 
	printf("Current list of the students:\n");
	for (int i = 0; i < size; i++)
	{
		input_register_check(students_queue[i].last_name);
		input_register_check(students_queue[i].name);
		printf_s("%d. %s  %s\n", i+1, students_queue[i].last_name, students_queue[i].name);
	}
	printf("=====================================================\n");
}

void output_priority_subgroup()
{
	printf("Enter priority subgroup (1,2,3 - NONE)\n");
}

void output_choice()
{
		printf("Print what you want to do (1 - call a student/2 - swap students/3 - view current list/4 - add student/5 - change priority)\n");	
}

void output_start()
{
	printf("\nNow it's time to take the exam %s %s\n", students_queue[0].last_name, students_queue[0].name);
	printf("Print a mark,if 3 or lower - retake\n");
	printf("Result: ");
}

void output_result()
{
	printf("The result is:\n");
	for (int i = 0; students_passed[i].last_name != NULL; i++)
	{
		printf("%d. %s  %s - %d\n", i + 1, students_passed[i].last_name, students_passed[i].last_name,students_passed[i].result);
	}
}

