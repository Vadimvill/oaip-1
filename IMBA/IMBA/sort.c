#include "sort.h"

void sort_student_list(const int size, const int sub_priority, students** queue)  //insert sort
{
	if (sub_priority == 1)
	{
		for (int i = 1; i < size; i++)
		{
			for (int j = i; j > 0 && (*queue)[j - 1].subgroup > (*queue)[j].subgroup; j--)
			{
				choice_swap(j, j + 1, queue);
			}
		}
	}
	else if(sub_priority == 2)
	{
		for (int i = 1; i < size; i++)
		{
			for (int j = i; j > 0 && (*queue)[j - 1].subgroup < (*queue)[j].subgroup; j--)
			{
				choice_swap(j, j + 1, queue);
			}
		}
	}
}
