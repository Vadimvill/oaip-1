#include<stdio.h>


int arry_input_check(int arr[], int num);
int func_arry_sum(int arr1[], int arr2[], int arr_sum[]);
void arr_rand_input(int arr[]);
int choice_input_check();

int main()
{
	int arr_num1[100], arr_num2[100], arr_sum[100], num = 1,choice = 0;
	choice = choice_input_check();
	switch (choice)
	{
	case 1:
		arry_input_check(arr_num1, num);
		num++;
		arry_input_check(arr_num2, num);
		break;
	case 2:
		arr_rand_input(arr_num1);
		arr_rand_input(arr_num2);
		break;
	default:
		return 0;
		break;
	}
	printf("%d", func_arry_sum(arr_num1, arr_num2,arr_sum));
}

int arry_input_check(int arr[],int num)
{
	printf("Enter the elments of the %d arry\n",num);
	for (int i = 0; i < 20; i++)
	{
		
		while ((scanf_s("%d", &arr[i])) == 0 || arr[i] >= 10)
		{
			printf("Wrong input.\n");
			scanf_s("%i", &arr[i]);
			rewind(stdin);
		}
	}
}

int func_arry_sum(int arr1[],int arr2[], int arr_sum[])
{ 
	int next_char = 0;
	for (int i = 19; i >= 0; i--)
	{
		if (next_char)
		{
			arr_sum[i] = arr1[i] + arr2[i]+1;
			next_char--;
		}
		else
		{
			arr_sum[i] = arr1[i] + arr2[i];
		}
		if (arr_sum[i] >= 10 && i != 0)
		{
			arr_sum[i] -= 10;
			next_char++;
		}
		if (arr_sum[0] >= 10)
		{
			printf("The answer has more than 20 symbols\n");
			return 0;
		}
		
	}
	printf("The answer is ");
	for (int i = 0; i < 20; i++)
	{
		printf( "%d", arr_sum[i]);
	}
	printf("\n");
	return 0;
}

void arr_rand_input(int arr[])
{
	srand(time(NULL));
	for (int i = 0; i < 20; i++)
	{
		arr[i] = rand() % 9;
	}
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


