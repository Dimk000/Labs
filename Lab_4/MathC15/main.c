#include <stdio.h>
#include <math.h>
#include <string.h>

double acosh(double d) {
    return 0;
}

int main()
{
    double a,x,G,F,Y,z,from_x,to_x,i,from_a,to_a,max=0,min=0;
    int steps,counter_array;
    char b;

    for(;;){
        printf("%s\n", "Хотите ли вы запустить программу? yes/no");
        char yes1[4] = "yes" ;
        char yes2[4];
        scanf("%s", yes2);
        if (strcmp(yes2,yes1) == 0){

            printf("Примечание: От меньшего к большему\n");
            printf("Введите значение переменной a от: ");
            scanf("%lf" , &from_a);
            printf("До: ");
            scanf("%lf", &to_a);
            printf("Введите значение переменной x от:  ");
            scanf("%lf", &from_x);
            printf("До: ");
            scanf("%lf", &to_x);
            printf("Количество шагов: ");
            scanf("%i", &steps);
            z = (to_x-from_x)/steps;
            double G_array[steps],F_array[steps],Y_array[steps];

            printf("%s\n", "Вычислить функцию G, F, Y");
            printf("%s", "Выберите функцию: ");
            scanf("%s", &b);

            switch (b) {
                case 'G':
                        for(i=from_x; i<to_x;i+=z){
                            x=i;
                        for(i=from_a;i<to_a;i+=z){
                            a=i;
                        if (((15*a*a+29*a*x+12*x*x) >= -0.00001
                             && (15*a*a+29*a*x+12*x*x) <= 0.00001)){
                            printf("Входные данные не подлежат области определения функции");
                            break;}
                        else{
                            G = (4 * a * a + 3 * a * x + 10 * x * x) / (15 * a * a + 29 * a * x + 12 * x * x);
                            G_array[steps] = G;}}}
                        max = G_array[0];
                        min = G_array[0];
                        for(counter_array=0;counter_array<steps;counter_array++){
                            if (max < G_array[counter_array+1])
                                max = G_array[counter_array+1];
                            if (min > G_array[counter_array+1])
                                min = G_array[counter_array+1];}
                            printf("%s%lf\n","Наибольший элемент: ", max);
                            printf("%s%lf\n","Наименьший элемент: ", min);
                    break;
                case 'F':
                        for(i=from_x;i<to_x;i+=z){
                            x=i;
                        for(i=from_a;i<to_a;i+=z){
                            a=i;
                        if ((cos(5 * a * a + 14 * a * x - 3 * x * x)) >= -0.00001
                            && (cos(5 * a * a + 14 * a * x - 3 * x * x)) <= 0.00001){
                            printf("Входные данные не подлежат области определения функции");
                            break;}
                        else{
                            F = 1 / (cos(5 * a * a + 14 * a * x - 3 * x * x));
                            F_array[steps] = F;}}}
                    break;
                case 'Y':
                        for(i=from_x;i<to_x;i+=z){
                            x=i;
                        for(i=from_a;i<to_a;i+=z){
                            a=i;
                        if ((9 * a * a + 42 * a * x + 40 * x * x + 1) <= 1){
                            printf("Входные данные не подлежат области определения функции");
                            break;}
                        else{
                            Y = acosh(9*a*a+42*a*x+40*x*x+1);
                            Y_array[steps] = Y;}}}
                    break;
                default:
                    printf("%s\n","Ошибка");
            }}
        else
            break;}
    return 0;
}
