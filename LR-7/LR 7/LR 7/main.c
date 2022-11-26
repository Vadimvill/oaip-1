#include <stdio.h>
#include"input.h"
#include"strings.h"
#include "task1.h"
#include "task2.h"

int main()
{
		printf("What task do you want to choose\nEnter 1 if first task\nEnter 2 if second task\n");
		void (*function[2])(void) = { task1, task2};
		int num = 0;
		scanf_s("%d", &num);
		function[num - 1]();
}


















