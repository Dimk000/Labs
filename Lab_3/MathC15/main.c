#include <stdio.h>
#include <math.h>
#include <string.h>

double acosh(double);

int main()
{
    double a,x,G,F,Y,z,from,to,i;
    int steps;
    char b;

    for(;;){
    printf("%s\n", "Хотите ли вы запустить программу? yes/no");
    char yes1[4] = "yes" ;
    char yes2[4];
    scanf("%s", yes2);
    if (strcmp(yes2,yes1) == 0){

    printf("Введите значение переменной а = ");
    scanf("%lf" , &a);
    printf("Введите значение переменной x от:  ");
    scanf("%lf", &from);
    printf("До: ");
    scanf("%lf", &to);
    printf("Количество шагов: ");
    scanf("%i", &steps);
    z = (to-from)/steps;

        printf("%s\n", "Вычислить функцию G, F, Y");
        printf("%s", "Выберите функцию: ");
        scanf("%s", &b);

        switch (b) {
            case 'G':
                for(i=from; i<to;i+=z){
                    x=i;
                if (((15*a*a+29*a*x+12*x*x) >= -0.00001
                     && (15*a*a+29*a*x+12*x*x) <= 0.00001)){
                    printf("Входные данные не подлежат области определения функции");
                    break;}
                else{
                    G = (4 * a * a + 3 * a * x + 10 * x * x) / (15 * a * a + 29 * a * x + 12 * x * x);
                    printf("%s%f\n","G = ", G);}}
                    break;
            case 'F':
                for(i=from;i<to;i+=z){
                    x=i;
                if ((cos(5 * a * a + 14 * a * x - 3 * x * x)) >= -0.00001
                    && (cos(5 * a * a + 14 * a * x - 3 * x * x)) <= 0.00001){
                    printf("Входные данные не подлежат области определения функции");
                    break;}
                else{
                    F = 1 / (cos(5 * a * a + 14 * a * x - 3 * x * x));
                    printf("%s%f\n", "F = ", F);}}
                    break;
            case 'Y':
                for(i=from;i<to;i+=z){
                    x=i;
                if ((9 * a * a + 42 * a * x + 40 * x * x + 1) <= 1){
                    printf("Входные данные не подлежат области определения функции");
                    break;}
                else{
                    Y = acosh(9 * a * a + 42 * a * x + 40 * x * x + 1);
                    printf("%s%f\n", "Y = ", Y);}}
                    break;
            default:
                printf("%s\n","Ошибка");
        }}
    else
    break;}
    return 0;
}