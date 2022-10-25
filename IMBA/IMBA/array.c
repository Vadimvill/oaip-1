#include "array.h"

void array_shift(int* size)
{
	for (int i = 0; i < (*size) - 1 ; i++)
	{
		students_queue[i].last_name = students_queue[i + 1].last_name;
		students_queue[i].name = students_queue[i + 1].name;
		students_queue[i].subgroup = students_queue[i + 1].subgroup;
	}
	(*size)--;
}

void array_passed_students(const int counter,const int result)
{
	students_passed[counter].last_name = students_queue[0].last_name;
	students_passed[counter].name = students_queue[0].name;
	students_passed[counter].subgroup = students_queue[0].subgroup;
	students_passed[counter].result = result;
}
