#include<stdio.h>
#include<stdlib.h>

void arry_input_check(int arr[], int SZIE);
int input_check();
int choice_input_check();
void arr_rand_input(int arr[], int SIZE);
int even_delete(int arr[], int SIZE);

int main()
{
	int arr[100], ARR_SIZE = 0, choice = 0;
	ARR_SIZE = input_check();
	choice = choice_input_check();
	switch (choice)
	{
	case 1:
		arry_input_check(arr, ARR_SIZE);
		break;
	case 2:
		arr_rand_input(arr, ARR_SIZE);
		break;
	default:
		return 0;
		break;
	}
	
	printf("%d", even_delete(arr, ARR_SIZE));
}

void arry_input_check(int arr[], int SIZE)
{
	printf("Enter the elments of arry\n");
	for (int i = 0; i < SIZE; i++)
	{
		while (scanf_s("%d", &arr[i]) == 0)
		{
			printf("Wrong input.\n");
			scanf_s("%i", &arr[i]);
			rewind(stdin);
		}
	}
}

int input_check()
{
	int input;
	printf("Enter the arry size that is lies between 1 and 100\n");
	while (scanf_s("%d", &input) == 0 || input >= 101)
	{
		printf("Wrong input.\n");
		scanf_s("%i", &input);
		rewind(stdin);
	}
	return input;
}

int choice_input_check()
{
	int input;
	printf("Print 1 if you want to enter the elements manually or print 2 to fill the arry with  random numbers\n");
	scanf_s("%d", &input);
	while (input != 1 && input != 2)
	{
		printf_s("Wrong input\n");
		scanf_s("%d", &input);
		rewind(stdin);
	}
	return input;
}

int even_delete(int arr[],int n)
{
	int x = 0;
	for (int i = 0; i < n; i++)
	{
		arr[x] = arr[i];
		if (arr[i] % 2 != 0)
		{
			x++;
		}
	}
	for (int i = x; i < n; i++)
	{
		arr[i] = 0;
	}
	printf("Arry wthiout evens ");
	for (int i = 0; i < x; i++)
	{
		printf("%d ", arr[i]);
	}
	
	printf("\n");
	return 0;
}

void arr_rand_input(int arr[], int SIZE)
{
	srand(time(NULL));
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand();
	}
}
