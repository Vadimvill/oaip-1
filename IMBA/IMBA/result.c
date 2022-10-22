#include "result.h"

void result_check(const int result,int* size, int arr_result[],int* counter)
{
	
	if (result > 3)
	{
		arr_result[*counter] = result;  
		array_passed_students(counter);
		array_shift(size);
		(*counter)++;
	}
	else                                                                                          // take the last place
	{
		char *temp_name, *temp_last_name;

		memory_allocate(&temp_name);
		memory_allocate(&temp_last_name);
		
		strcpy(temp_last_name, students_queue[0].last_name);
		strcpy(temp_name, students_queue[0].name);

		for (int i = 1 ; i < (*size); i++)
		{
			strcpy(students_queue[i-1].last_name, students_queue[i].last_name);
			strcpy(students_queue[i-1].name, students_queue[i].name);
		}
		strcpy(students_queue[*size -1].last_name, temp_last_name);
		strcpy(students_queue[*size -1].name, temp_name);

		//FREE
	}
}




