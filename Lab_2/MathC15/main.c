#include <stdio.h>
#include <math.h>

double acosh(double);

int main()
{
    double a,x,G,F,Y;
    char b;

    printf("Введите значение переменной а = ");
    scanf("%lf" , &a);
    printf("Введите значение переменной x = ");
    scanf("%lf", &x);

    if(((15*a*a+29*a*x+12*x*x)>= -0.00001 && (15*a*a+29*a*x+12*x*x) <= 0.00001)
       || (cos(5 * a * a + 14 * a * x - 3 * x * x) >= -0.00001 && cos(5 * a * a + 14 * a * x - 3 * x * x) <= 0.00001)
       || ((9 * a * a + 42 * a * x + 40 * x * x + 1) <= 1))
        printf("Входные данные не подлежат области определения функции");
    else {
        printf("%s\n", "Вычислить функцию G,F,Y");
        printf("%s", "Выберите функцию: ");
        scanf("%s", &b);

        switch (b) {
            case 'G':
                G = (4 * a * a + 3 * a * x + 10 * x * x) / (15 * a * a + 29 * a * x + 12 * x * x);
                printf("%s%f\n","G = ", G);
                break;
            case 'F':
                F = 1 /  cos(5 * a * a + 14 * a * x - 3 * x * x);
                printf("%s%f\n", "F = ", F);
                break;
            case 'Y':
                Y = acosh(9 * a * a + 42 * a * x + 40 * x * x + 1);
                printf("%s%f\n", "Y = ", Y);
                break;
            default:
                printf("%s\n","Ошибка");
        }
    }
    return 0;
}