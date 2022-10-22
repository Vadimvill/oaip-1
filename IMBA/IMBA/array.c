#include "array.h"

void array_shift(int* size)
{
	for (int i = 0; i < (*size) - 1 ; i++)
	{
		students_queue[i].last_name = students_queue[i + 1].last_name;
		students_queue[i].name = students_queue[i + 1].name;
	}
	(*size)--;
}

void array_passed_students(int* counter)
{
	students_passed[*counter].last_name = students_queue[0].last_name;
	students_passed[*counter].name = students_queue[0].name;
}
