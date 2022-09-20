#include<stdio.h>
#include<math.h>

float input_check();

int main()
{
    float R, B, diag;
    printf("Enter R and B\n");
    R = input_check();
    B = input_check();
   
    diag = sqrt(2)*B;
    if (diag <= 2*R )
    {
        printf("You can cut a square hole");
    }
    else
    {
        printf("You cant cut a square hole");
    }

}
float input_check()
{
    float a;
    while (scanf_s("%f", &a) == 0)
    {
        printf("Wrong input.Enter R and B\n");
        scanf_s("%f", &a);
        rewind(stdin);
    }
    return a;
}
