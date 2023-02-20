#include"output.h"
#include"input.h"
#include"choice.h"
#include"memory.h"
#include"sort.h"
#include"studentStruct.h"

int main()
{
	int choice = 0, size_of_queue = 0, sub_priority, counter = 0;   //counter - number of passed students
	students* queue;
	students* passed;

	memory_strcut_allocate(size_of_queue + 1, &queue);
	memory_strcut_allocate(size_of_queue + 1, &passed);
	output_priority_subgroup();
	input_priority_subgroup(&sub_priority);
	input_initials(&size_of_queue, &queue);
	sort_student_list(size_of_queue, sub_priority, queue);
	output_students_list(size_of_queue, queue);
	while (size_of_queue)
	{
		output_choice();
		input_choice(&choice);
		choice_switch(choice, &size_of_queue, &counter, &sub_priority, &queue, &passed);
	}
	output_student_passed(counter, passed);
	free(queue);
	free(passed);
}








