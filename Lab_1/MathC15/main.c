#include <stdio.h>
#include <math.h>

int main()
{
    double a,x,G,F,Y;

    printf("Введите значение переменной а = ");
    scanf("%lf" , &a);
    printf("Введите значение переменной x = ");
    scanf("%lf", &x);

    G = (4 * a * a + 3 * a * x + 10 * x * x) / (15 * a * a + 29 * a * x + 12 * x * x);
    printf("%s%f\n","G = ", G);

    F = 1 / (cos(5 * a * a + 14 * a * x - 3 * x * x));
    printf("%s%f\n", "F = ", F);

    Y =  acos(9 * a * a + 42 * a * x + 40 * x * x + 1);
    printf("%s%f\n", "Y = ", Y);

    return 0;
}