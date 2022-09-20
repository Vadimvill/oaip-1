#include<stdio.h>

float input_check();

int main()
{
	float volume1, volume2;
	printf("Enter volume in the 1 vessel ");
	volume1 = input_check();
	printf("Enter volume in the 2 vessel ");
	volume2 = input_check();

	for (int i = 0; i<12; i++)
	{
		volume1 /= 2;
		volume2 += volume1;
		volume2 /= 2;
		volume1 += volume2;
	}
	printf("The amount of water in the 1 vessel - %f\n", volume1);
	printf("The amount of water in the 2 vessel - %f", volume2);

}
float input_check()
{
	float input;
	while (scanf_s("%f", &input) == 0)
	{
		printf("Wrong input.Enter the volume\n");
		rewind(stdin);
	}
	return input;
}