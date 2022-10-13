#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void arr_rand_input(int arr[100][100], int col, int row);
int find_max_elem(int arr[100][100], int row, int col);
int find_strings_without_zero(int arr[100][100], int row, int col);
void output_arry(int arr[100][100], int row, int col);
void arry_input_check(int arr[100][100], int col, int row);
int choice_input_check();
int input_check(int* row, int* col);

int main()
{
	int	arr[100][100], col, row, choice = 0, max_elem = 0;

	input_check(&row, &col);
	choice = choice_input_check();
	switch (choice)
	{
	case 1:
		arry_input_check(arr,col,row);
		break;
	case 2:
		arr_rand_input(arr,col,row);
		break;
	default:
		return 0;
		break;
	}

	output_arry(arr, row, col);
	printf("String without zero - %d\n", find_strings_without_zero(arr, row, col));

	max_elem = find_max_elem(arr, row, col);
	if (max_elem == INT_MIN)
	{
		printf("There is no 2 or more same elements\n");
	}
	else
	{
		printf("Max elem - %d", find_max_elem(arr, row, col));
	}
}

int input_check(int* row, int* col)
{

	printf("Enter the arry cols that is lies between 1 and 100\n");
	while (scanf_s("%d", col) == 0 || *col >= 101 || *col < 1)
	{
		printf("Wrong input.\n");
		rewind(stdin);
	}
	printf("Enter the arry rows that is lies between 1 and 100\n");
	while (scanf_s("%d", row) == 0 || *row >= 101 || *row < 1)
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

void arry_input_check(int arr[100][100], int col, int row)
{
	for (int i = 0; i < row; i++)
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

void arr_rand_input(int arr[100][100], int col, int row)
{
	srand(time(NULL));
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			arr[i][j] = rand() % 200 - 100;
		}

	}
}

void output_arry(int arr[100][100], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			printf("%d \t", arr[i][j]);
		}
		printf("\n");
	}
}

int find_strings_without_zero(int arr[100][100], int row, int col)
{
	int strings_without_zero = 0;
	for (int i = 0; i < row; i++)
	{
		int temp = 0;
		for (int j = 0; j < col; j++)
		{
			if (arr[i][j] == 0)
			{
				temp++;
			}
		}
		if (temp == 0) strings_without_zero++;
	}
	return strings_without_zero;
}

int find_max_elem(int arr[100][100], int row, int col)
{
	int count = 2,max_elem = INT_MIN;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			int temp = 0;
			for (int k = 0; k < row; k++)
			{
				for (int l = 0; l < col; l++)
				{
					if (arr[i][j] == arr[k][l])
					{
						temp++;
					}
				}
			}
			if ((temp >= count) && (arr[i][j] > max_elem))
			{
				max_elem = arr[i][j];
				count = temp;
			}
		}
	}
	return max_elem;
}
