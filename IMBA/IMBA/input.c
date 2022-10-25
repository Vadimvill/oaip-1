#include "input.h"

void input_initials(int* size)
{
	for (; (*size) < 50; (*size)++)
	{
		rewind(stdin);
		printf("Entenr the initials of the %d student(If you want to finish the list enter '-' at the name \n", (*size) + 1);
		printf("Name:\t\t");
		memory_allocate(&students_queue[*size].name);
		gets(students_queue[*size].name);
		if (students_queue[*size].name[0] == '-' && students_queue[*size].name[1] == '\0')              
			break;
		printf("Last Name:\t");
		memory_allocate(&students_queue[*size].last_name);
		gets(students_queue[*size].last_name);
		printf("Subgroup:\t");
		while (scanf_s("%d", &students_queue[*size].subgroup) == 0 || students_queue[*size].subgroup > 2 || students_queue[*size].subgroup <= 0 || getchar() != '\n')
		{
			printf("Wrong input.\n");
			rewind(stdin);
		}
	}
}

void input_priority_subgroup(int* sub_priority)
{
	while (scanf_s("%d", sub_priority) == 0 || (*sub_priority) > 3 || (*sub_priority) <= 0 || getchar() != '\n')
	{
		printf("Wrong input.\n");
		rewind(stdin);
	}
}

void input_choice(int* choice)
{
	rewind(stdin);
	while (scanf_s("%d",choice) == 0 || (* choice) < 1 || (*choice) >5 || getchar() != '\n')
	{
		printf("Wrong input.\n");
		rewind(stdin);
	}
}

void input_register_check(char input[])
{
	for (int i = 0; i < 50; i++)
	{
		if (input[0] >= 'a' && input[0] <= 'z')
			input[0] -= 'z' - 'Z';

		if (input[i + 1] == '\0')
			break;

		if (input[i+1] >= 'A' && input[i+1] <= 'Z')
			input[i+1] += 'z' - 'Z';

	}
}

void input_result(int* result)
{
	rewind(stdin);
	while (scanf_s("\n%d", result) == 0 || (*result) > 10 || (*result) < 0 || getchar() != '\n')
	{
		printf("Wrong input.\n");
		rewind(stdin);
	}
}

void input_swap(int* swap1, int* swap2,const int size)
{
	rewind(stdin);
	while (scanf_s("%d", swap1) == 0 || (*swap1) > size || getchar() != '\n')
	{
		printf("Wrong input.\n");
		rewind(stdin);
	}
	while (scanf_s("%d", swap2) == 0 || (*swap2) > size || getchar() != '\n')
	{
		printf("Wrong input.\n");
		rewind(stdin);
	}
}


