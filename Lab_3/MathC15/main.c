#include <stdio.h>
#include <math.h>
#include <string.h>

double acosh(double);

int main()
{
    double a,x,G,G1,F,F1,Y,Y1,from,to,i,step_value,difference;
    char b;

    for(;;){
    printf("%s\n", "Хотите ли вы запустить программу? yes/no");
    char yes1[4] = "yes" ;
    char yes2[4];
    scanf("%s", yes2);
    if (strcmp(yes2,yes1) == 0){

    printf("Введите значение переменной а: ");
    scanf("%lf" , &a);
    printf("Введите значение переменной x от: ");
    scanf("%lf", &from);
    printf("До: ");
    scanf("%lf", &to);
    printf("Размер шага: ");
    scanf("%lf", &step_value);
    printf("Введите разницу между функциями: ");
    scanf("%lf", &difference);

        printf("%s\n", "Вычислить функцию G, F, Y");
        printf("%s", "Выберите функцию: ");
        scanf("%s", &b);

        switch (b) {
            case 'G':
                for(i=from; i<to;i+=step_value){
                    x=i;
                if (((15*a*a+29*a*x+12*x*x) >= -0.00001
                     && (15*a*a+29*a*x+12*x*x) <= 0.00001)){
                    printf("Входные данные не подлежат области определения функции");
                    break;}
                else{
                    G = (4 * a * a + 3 * a * x + 10 * x * x) / (15 * a * a + 29 * a * x + 12 * x * x);
                    printf("%s%f\n","G = ", G);}
                G1 = (4 * a * a + 3 * a * (x+step_value) + 10 * (x+step_value) * (x+step_value))
                     / (15 * a * a + 29 * a * (x+step_value) + 12 * (x+step_value) * (x+step_value));
                if (fabs(G1-G) < difference){
                    while(fabs(G1-G) < difference){
                    step_value*=2;
                    G1 = (4 * a * a + 3 * a * (x+step_value) + 10 * (x+step_value) * (x+step_value))
                         / (15 * a * a + 29 * a * (x+step_value) + 12 * (x+step_value) * (x+step_value));}}}
                    break;
            case 'F':
                for(i=from;i<to;i+=step_value){
                    x=i;
                if ((cos(5 * a * a + 14 * a * x - 3 * x * x)) >= -0.00001
                    && (cos(5 * a * a + 14 * a * x - 3 * x * x)) <= 0.00001){
                    printf("Входные данные не подлежат области определения функции");
                    break;}
                else{
                    F = 1 / (cos(5 * a * a + 14 * a * x - 3 * x * x));
                    printf("%s%f\n", "F = ", F);}
                F1 = 1 / (cos(5 * a * a + 14 * a * (x+step_value) - 3 * (x+step_value) * (x+step_value)));
                if (fabs(F1-F)<difference){
                    while(fabs(F1-F)<difference){
                        step_value*=2;
                        F1 = 1 / (cos(5 * a * a + 14 * a * (x+step_value) - 3 * (x+step_value) * (x+step_value)));}}}
                    break;
            case 'Y':
                for(i=from;i<to;i+=step_value){
                    x=i;
                if ((9 * a * a + 42 * a * x + 40 * x * x + 1) <= 1){
                    printf("Входные данные не подлежат области определения функции");
                    break;}
                else{
                    Y = acosh(9 * a * a + 42 * a * x + 40 * x * x + 1);
                    printf("%s%f\n", "Y = ", Y);}
                Y1 = acosh(9 * a * a + 42 * a * (x+step_value) + 40 * (x+step_value) * (x+step_value) + 1);
                if(fabs(Y1-Y)<difference)
                    while(fabs(Y1-Y)<difference){
                        step_value*=2;
                        Y1 = acosh(9 * a * a + 42 * a * (x+step_value) + 40 * (x+step_value) * (x+step_value) + 1);}}
                    break;
            default:
                printf("%s\n","Ошибка");
        }}
    else
    break;}
    return 0;
}