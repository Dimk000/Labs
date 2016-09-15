#include <stdio.h>
#include <math.h>

int main()
{
    float a,x,G,F,Y;
    printf("Введите значение переменной а = ");
    scanf("%f" , &a);
    printf("Введите значение переменной x = ");
    scanf("%f", &x);
    G = (4*a*a+3*a*x+10*x*x)/(15*a*a+29*a*x+12*x*x);
    F = 1/((float)cos(5*a*a+14*a*x-3*x*x));
    Y = (float)acos(9*a*a+42*a*x+40*x*x+1);
    printf("%s%f\n", "G = ", G);
    printf("%s%f\n", "F = ", F);
    printf("%s%f\n", "Y = ", Y);
    return 0;
}