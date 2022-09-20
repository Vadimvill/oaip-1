#include<stdio.h>

int input_check();

int main()
{
	int num1, num2, quotient = 0;
	printf("Enter the first number - ");
	num1 = input_check();
	printf("Enter the second number - ");
	num2 = input_check();
	for (; num1 >= num2; quotient++)
	num1 -= num2;
	printf("Quotient of division = %d\n", quotient);
	printf("Remainder of division = %d", num1);
}

int input_check()
{
	int input;
	while (scanf_s("%i", &input) == 0)
	{
		printf("Wrong input.Enter the number");
		rewind(stdin);
	}
	return input;
}