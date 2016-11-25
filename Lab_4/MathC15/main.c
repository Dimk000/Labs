#include <stdio.h>
#include <math.h>
#include <string.h>

double acosh(double d) {
    return 0;
}

int main()
{
    double a,x,G,F,Y,from_x,to_x,i,j,from_a,to_a,x_step,a_step,max,min;
    int steps,arrayc=0,counter;
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
            x_step = (to_x-from_x)/steps;
            a_step = (to_a-from_a)/steps;
            double G_array[steps],F_array[steps],Y_array[steps];

            printf("%s\n", "Вычислить функцию G, F, Y");
            printf("%s", "Выберите функцию: ");
            scanf("%s", &b);

            switch (b) {
                case 'G':
                        for(i=from_x,j=from_a;i<to_x,j<to_a;i+=x_step,j+=a_step){
                            x=i;
                            a=j;
                        if (((15*a*a+29*a*x+12*x*x) >= -0.00001
                             && (15*a*a+29*a*x+12*x*x) <= 0.00001)){
                            printf("Входные данные не подлежат области определения функции");
                            break;}
                        else{
                            G = (4 * a * a + 3 * a * x + 10 * x * x) / (15 * a * a + 29 * a * x + 12 * x * x);
                            G_array[arrayc] = G;
                            arrayc+=1;}}
                            min = G_array[0];
                            max = G_array[0];
                        for(counter=0;counter<arrayc;counter++){
                            printf("%s%lf\n","G_array =",G_array[counter]);
                            if(G_array[counter] < G_array[counter+1])
                                min = G_array[counter];
                            if(G_array[counter] > G_array[counter+1])
                                max = G_array[counter];
                        }
                    break;
                case 'F':
                        for(i=from_x, j=from_a;i<to_x, j<to_a;i+=x_step,j+=a_step){
                            x=i;
                            a=j;
                        if ((cos(5 * a * a + 14 * a * x - 3 * x * x)) >= -0.00001
                            && (cos(5 * a * a + 14 * a * x - 3 * x * x)) <= 0.00001){
                            printf("Входные данные не подлежат области определения функции");
                            break;}
                        else{
                            F = 1 / (cos(5 * a * a + 14 * a * x - 3 * x * x));
                           }}
                    break;
                case 'Y':
                        for(i=from_x, j=from_a;i<to_x, j<to_a;i+=x_step,j+=a_step){
                            x=i;
                            a=j;
                        if ((9 * a * a + 42 * a * x + 40 * x * x + 1) <= 1){
                            printf("Входные данные не подлежат области определения функции");
                            break;}
                        else{
                            Y = acosh(9*a*a+42*a*x+40*x*x+1);
                            Y_array[steps] = Y;}}
                    break;
                default:
                    printf("%s\n","Ошибка");
            }
            printf("%s%lf\n","Max = ", max);
            printf("%s%lf\n","Min = ", min);
            printf("%s%lf\n","G0 = ", G_array[0]);
        }
        else
            break;}
    return 0;
}
