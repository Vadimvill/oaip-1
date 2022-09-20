#include<stdio.h>

int main()
{
    float num1, num2, num3;
    int counter = 0;
    printf("Enter 3 numbers\n");
    while (scanf_s("%f%f%f", &num1, &num2, &num3) == 0)
    {
        printf("Wrong input.Enter 3 numbers\n");
        scanf_s("%f%f%f", &num1, &num2, &num3);
        rewind(stdin);
    }
    if ((int)num1 == num1)
    {
        counter++;

    }
    if ((int)num2 == num2)
    {
        counter++;

    }
    if ((int)num3 == num3)
    {
        counter++;

    }
    printf("There are %i integer numbers", counter);

}
