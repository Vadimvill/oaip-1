#include "array.h"

void queue_shift(int* size, students** queue)
{
	for (int i = 0; i < (*size) - 1 ; i++)
	{
		(*queue)[i].last_name = (*queue)[i + 1].last_name;
		(*queue)[i].name = (*queue)[i + 1].name;
		(*queue)[i].surname = (*queue)[i + 1].surname;
		(*queue)[i].subgroup = (*queue)[i + 1].subgroup;
	}
	(*size)--;
	memory_struct_reallloc((*size) + 1, queue);
}

void passed_students_add_person(const int counter, const int result, students** queue, students** passed)
{
	memory_string_allocate(&(*passed)[counter].name);
	memory_string_allocate(&(*passed)[counter].last_name);
	memory_string_allocate(&(*passed)[counter].surname);
	(*passed)[counter].last_name = (*queue)[0].last_name;
	(*passed)[counter].name = (*queue)[0].name;
	(*passed)[counter].surname = (*queue)[0].surname;
	(*passed)[counter].subgroup = (*queue)[0].subgroup;
	(*passed)[counter].result = result;
	memory_struct_reallloc(counter + 2, passed);

}
