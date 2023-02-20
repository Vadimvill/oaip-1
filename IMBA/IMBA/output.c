#include "output.h"

void output_students_list(const int size, students* queue)
{
	printf("=====================================================\n"); 
	printf("Current list of the students:\n");
	for (int i = 0; i < size; i++)
	{
		register_to_upper(queue[i].last_name);
		register_to_upper(queue[i].name);
		printf_s("%d. %s  %s\n", i+1, queue[i].last_name, queue[i].name);
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

void output_start_an_exam(students* queue)
{
	printf("\nNow it's time to take the exam %s %s\n", queue[0].last_name, queue[0].name);
	printf("Print a mark,if 3 or lower - retake\n");
	printf("Result: ");
}

void output_student_passed(const int counter, students* passed)
{
	printf("The result is:\n");
	for (int i = 0; i < counter; i++)
	{
		printf("%d. %s  %s - %d\n", i + 1, passed[i].last_name, passed[i].last_name, passed[i].result);
	}
}

