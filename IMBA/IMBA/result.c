#include "result.h"

void result_check(const int result, int* size, int* counter, students** queue, students** passed)
{
	if (result > 3)
	{
		passed_students_add_person(*counter, result, queue, passed);
		queue_shift(size, queue);
		(*counter)++;
	}
	else
	// take the last place
	{
		char* temp_name, * temp_last_name;
		int temp_subgroup;

		memory_string_allocate(&temp_name);
		memory_string_allocate(&temp_last_name);
		
		strcpy(temp_last_name, (*queue)[0].last_name);
		strcpy(temp_name, (*queue)[0].name);
		temp_subgroup = (*queue)[0].subgroup;

		for (int i = 1 ; i < (*size); i++)
		{
			strcpy((*queue)[i-1].last_name, (*queue)[i].last_name);
			strcpy((*queue)[i-1].name, (*queue)[i].name);
			(*queue)[i - 1].subgroup = (*queue)[i].subgroup;
		}
		strcpy((*queue)[*size -1].last_name, temp_last_name);
		strcpy((*queue)[*size -1].name, temp_name);
		(*queue)[*size - 1].subgroup = temp_subgroup;

		free(temp_last_name);
		free(temp_name);
	}
}




