#include<stdio.h>

float input_check();

int main()
{
	float initial_amount_of_money, final_amount_of_money;
	int time_intertval = 0;

	printf("Enter the amount of money - ");
	initial_amount_of_money=input_check();
	printf("Enter the final amount of money you want to receive - ");
	final_amount_of_money=input_check();

	for (; initial_amount_of_money < final_amount_of_money;time_intertval++ )
	     initial_amount_of_money += initial_amount_of_money * 0.04/12 ;
	
	printf("%i months", time_intertval);
}
float input_check()
{
	float input;
	while (scanf_s("%f", &input) == 0)
	{
		printf("Wrong input.\n");
		rewind(stdin);
	}
	return input;
}