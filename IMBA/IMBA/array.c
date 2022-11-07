#include "array.h"

void array_shift(int* size, students** queue)
{
	for (int i = 0; i < (*size) - 1 ; i++)
	{
		(*queue)[i].last_name = (*queue)[i + 1].last_name;
		(*queue)[i].name = (*queue)[i + 1].name;
		(*queue)[i].subgroup = (*queue)[i + 1].subgroup;
	}
	(*size)--;
	memory_struct_reallloc(*size, (*queue));
	memory_struct_reallloc(*size, (*queue));
}

void array_passed_students(const int counter, const int result, students** queue, students** passed)
{
	memory_array_allocate(&(*passed)[counter].name);
	memory_array_allocate(&(*passed)[counter].last_name);
	(*passed)[counter].last_name = (*queue)[0].last_name;
	(*passed)[counter].name = (*queue)[0].name;
	(*passed)[counter].subgroup = (*queue)[0].subgroup;
	(*passed)[counter].result = result;
	memory_struct_reallloc(counter + 2, passed);

}
