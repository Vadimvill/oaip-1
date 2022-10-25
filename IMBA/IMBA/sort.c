#include "sort.h"

void sort_student_list(const int size, const int sub_priority)    //insert sort
{
	if (sub_priority == 1)
	{
		for (int i = 1; i < size; i++)
		{
			for (int j = i; j > 0 && students_queue[j - 1].subgroup > students_queue[j].subgroup; j--)
			{
				choice_swap(j, j + 1);
			}
		}
	}
	else if(sub_priority == 2)
	{
		for (int i = 1; i < size; i++)
		{
			for (int j = i; j > 0 && students_queue[j - 1].subgroup < students_queue[j].subgroup; j--)
			{
				choice_swap(j, j + 1);
			}
		}
	}
}
