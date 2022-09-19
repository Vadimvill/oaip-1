#include<stdio.h>

int input_check();
  
int main()
{
	int year, num_of_the_month = 0; 
	char month_input[10];
	const char *const month_base[] = 
{"january","febrary","march","april","may","june","july","august","september",
"october","november","december"};

	printf("Enter the year\n");
	year =input_check();
	printf("Enter the month\n");
	scanf_s("%s", month_input,10);

	for (int i = 0; i < sizeof(month_input); i++)
	{
		if (month_input[i] >= 'A' && month_input[i] <= 'Z')
			month_input[i] += 'z' - 'Z';
	}
	
	for (int j = 0; j < 12; ++j)
	{
	       if (strcmp(month_input, month_base[j]) == 0)
		       num_of_the_month = j + 1;
	}
	

	switch (num_of_the_month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		printf("In %s %i, 31 days\n",month_input, year);
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		printf("In %s %i, 30 days\n",month_input, year);
		break;
	case 2:
		if (year % 4 == 0)
		{
			printf("In %s %i, 29 days\n", month_input, year);    // високосный 29 2020 2024
			break;
		}
		else
		{
			printf("In %s %i, 28 days\n", month_input, year);   // невисокосный 28
			break;
		}
	default:
		return 0;
	}
}

int input_check()
{
	int input;
	while (scanf_s("%i", &input) == 0)
	{
		printf("Wrong input.Enter the year\n");
		rewind(stdin);
	}
	return input;
}
