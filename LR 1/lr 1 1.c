#include <stdio.h>
#include<math.h>

float input_check();

int main()
{
    float num1, num2, avg_aref, avg_geom;
    printf("Enter 2 real numbers\n");
    num1 = input_check();
    num2 = input_check();
  
    avg_aref = (num1 + num2) / 2;
    avg_geom = sqrt(fabs(num1) * fabs(num2));
    printf("Arithmetic average=%.3f\nGeometric average=%.3f", avg_aref, avg_geom);

}

float input_check()
{
   float a;
    while (scanf_s("%f", &a) == 0)
    {
        printf("Wrong input.Enter 2 real numbers\n");
        scanf_s("%f", &a);
        rewind(stdin);
    }
    return a;
}
