#include <stdio.h>
#include <math.h>

int main()
{
    double a,x,G,F,Y,z,from,to,i;
    int b,steps;

    printf("Введите значение переменной а = ");
    scanf("%lf" , &a);
    printf("Введите значение переменной x от:  ");
    scanf("%lf", &from);
    printf("До: ");
    scanf("%lf", &to);
    printf("Количество шагов: ");
    scanf("%i", &steps);
    z = (to-from)/steps;

        printf("%s\n", "Вычислить функцию G - 1");
        printf("%s\n", "Вычислить функцию F - 2");
        printf("%s\n", "Вычислить функцию Y - 3");
        printf("%s", "Выберите функцию: ");
        scanf("%d", &b);

        switch (b) {
            case 1:
                for(i=from; i<to;i+=z){
                    x=i;
                if (((15*a*a+29*a*x+12*x*x) >= -0.00001 && (15*a*a+29*a*x+12*x*x) <= 0.00001)){
                    printf("Входные данные не подлежат области определения функции");
                    break;}
                else{
                    G = (4 * a * a + 3 * a * x + 10 * x * x) / (15 * a * a + 29 * a * x + 12 * x * x);
                    printf("%s%f\n","G = ", G);}}
                    break;
            case 2:
                for(i=from;i<to;i+=z){
                    x=i;
                if ((cos(5 * a * a + 14 * a * x - 3 * x * x)) >= -0.00001 && (cos(5 * a * a + 14 * a * x - 3 * x * x)) <= 0.00001){
                    printf("Входные данные не подлежат области определения функции");
                    break;}
                else{
                    F = 1 / (cos(5 * a * a + 14 * a * x - 3 * x * x));
                    printf("%s%f\n", "F = ", F);}}
                    break;
            case 3:
                for(i=from;i<to;i+=z){
                    x=i;
                    Y = acos(9 * a * a + 42 * a * x + 40 * x * x + 1);
                    printf("%s%f\n", "Y = ", Y);}
                    break;
            default:
                printf("%s\n","Ошибка");
        }

    return 0;
}