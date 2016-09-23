#include <stdio.h>
#include <math.h>

int main()
{
    float a,x,G,F,Y;
    int b;

    printf("Введите значение переменной а = ");
    scanf("%f" , &a);
    printf("Введите значение переменной x = ");
    scanf("%f", &x);

    if((15*a*a+29*a*x+12*x*x == 0) | ((9*a*a+42*a*x+40*x*x+1) > 1) | ((9 * a * a + 42 * a * x + 40 * x * x + 1) < -1) | (((float) cos(5 * a * a + 14 * a * x - 3 * x * x)) == 0 ))
        printf("Входные данные не подлежат области определения функции");
    else {
        printf("%s\n", "Вычислить функцию G - 1");
        printf("%s\n", "Вычислить функцию F - 2");
        printf("%s\n", "Вычислить функцию Y - 3");
        printf("%s", "Выберите функцию: ");
        scanf("%d", &b);

        switch (b) {
            case 1:
                G = (4 * a * a + 3 * a * x + 10 * x * x) / (15 * a * a + 29 * a * x + 12 * x * x);
                printf("%s%f\n","G = ", G);
                break;
            case 2:
                F = 1 / ((float) cos(5 * a * a + 14 * a * x - 3 * x * x));
                printf("%s%f\n", "F = ", F);
                break;
            case 3:
                Y = (float) acos(9 * a * a + 42 * a * x + 40 * x * x + 1);
                printf("%s%f\n", "Y = ", Y);
                break;
            default:
                printf("%s\n","Ошибка");
        }
    }
    return 0;
}