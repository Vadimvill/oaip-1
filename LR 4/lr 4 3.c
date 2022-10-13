#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int input_check(int* col);
int choice_input_check();
void arry_input_check(int arr[100][100], int col);
void arr_rand_input(int arr[100][100], int col);
void output_arry(int arr[100][100], int col);
int sum(int arr[100][100], int col);

int main()
{
	int	arr[100][100], col, choice = 0;

	input_check(&col);
	choice = choice_input_check();
	switch (choice)
	{
	case 1:
		arry_input_check(arr, col);
		break;
	case 2:
		arr_rand_input(arr, col);
		break;
	default:
		return 0;
		break;
	}
	output_arry(arr, col);
	printf("The result is %d", sum(arr, col));

}

int input_check( int* col)
{

	printf("Enter the arry size that is lies between 1 and 100\n");
	while (scanf_s("%d", col) == 0 || *col >= 101 || *col < 1)
	{
		printf("Wrong input.\n");
		rewind(stdin);
	}
}

int choice_input_check()
{
	int input;
	printf("Print 1 if you want to enter the elements manually or print 2 to fill the arry with  random numbers\n");
	while (scanf_s("%d", &input) < 1 || input > 2)
	{
		printf_s("Wrong input\n");
		rewind(stdin);
	}
	return input;
}

void arry_input_check(int arr[100][100], int col)
{
	for (int i = 0; i < col; i++)
	{
		printf("Enter the elements of the %d row\n", i + 1);
		for (int j = 0; j < col; j++)
		{
			while (scanf_s("%d", &arr[i][j]) == 0)
			{
				printf("Wrong input.\n");
				rewind(stdin);
			}
		}
	}
}

void arr_rand_input(int arr[100][100], int col)
{
	srand(time(NULL));
	for (int i = 0; i < col; i++)
	{
		for (int j = 0; j < col; j++)
		{
			arr[i][j] = rand() % 200 - 100;
		}

	}
}

void output_arry(int arr[100][100], int col)
{
	for (int i = 0; i < col; i++)
	{
		for (int j = 0; j < col; j++)
		{
			printf("%d \t", arr[i][j]);
		}
		printf("\n");
	}
}

int sum(int arr[100][100], int col)
{
	int sum = 0,temp;

	if (col % 2 == 0)
	{
		for (int i = 0; i < col; ++i)
		{
			for (int j = 0; i < col; j++)
			{
				sum += arr[i][j];
				if (i == j)
				{
					temp = j;
					break;
				}
			}
			if (i + temp == (col / 2) || col == 2)
				break;
		}
	}
	else
	{
		for (int i = 0; i < col; ++i)
		{
			for (int j = 0; i < col; j++)
			{
				sum += arr[i][j];
				if (i == j)
				{
					temp = j;
					break;
				}
			}
			if (i + temp == col - 1)
				break;
		}
	}
	for (int i = temp + 1; i < col; i++)
	{
		for (int j = 0; i < col; j++)
		{
			sum += arr[i][j];
			if (i + j == col - 1)
				break;
		}
	}

	
		return sum;
}
