#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

double acosh(double);

int main()
{
    FILE *file;

    double a,x,from_x,to_x,i,j,from_a,to_a,x_step,a_step;
    int steps,arrayc=0;
    char string_value[100],file_value[1000];

    for(;;){
        printf("%s\n", "Хотите ли вы запустить программу? yes/no");
        char yes1[4] = "yes" ;
        char yes2[4];
        scanf("%s", yes2);
        if (strcmp(yes2,yes1) == 0){

            printf("Введите значение переменной a от: ");
            scanf("%s" , string_value);
            from_a = atof(string_value);
            printf("До: ");
            scanf("%s", string_value);
            to_a = atof(string_value);
            printf("Введите значение переменной x от:  ");
            scanf("%s", string_value);
            from_x = atof(string_value);
            printf("До: ");
            scanf("%s", string_value);
            to_x = atof(string_value);
            printf("Количество шагов: ");
            scanf("%s", string_value);
            steps = atoi(string_value);
            x_step = (to_x-from_x)/steps;
            a_step = (to_a-from_a)/steps;

            struct{
                double G_array[steps];
                double F_array[steps];
                double Y_array[steps];
            }values;

            for(i=from_x,j=from_a;i<to_x,j<to_a;i+=x_step,j+=a_step){
                x=i;
                a=j;
                if (((15*a*a+29*a*x+12*x*x) >= -0.00001
                     && (15*a*a+29*a*x+12*x*x) <= 0.00001)){
                    printf("Входные данные не подлежат области определения функции");
                    break;}
                else{
                    values.G_array[arrayc] = (4 * a * a + 3 * a * x + 10 * x * x) / (15 * a * a + 29 * a * x + 12 * x * x);
                    arrayc++;}}
            arrayc=0;
            for(i=from_x, j=from_a;i<to_x, j<to_a;i+=x_step,j+=a_step){
                x=i;
                a=j;
                if ((cos(5 * a * a + 14 * a * x - 3 * x * x)) >= -0.00001
                    && (cos(5 * a * a + 14 * a * x - 3 * x * x)) <= 0.00001){
                    printf("Входные данные не подлежат области определения функции");
                    break;}
                else{
                    values.F_array[arrayc] = 1 / (cos(5 * a * a + 14 * a * x - 3 * x * x));
                    arrayc++;}}
            arrayc=0;
            for(i=from_x, j=from_a;i<to_x, j<to_a;i+=x_step,j+=a_step){
                x=i;
                a=j;
                if ((9 * a * a + 42 * a * x + 40 * x * x + 1) <= 1){
                    printf("Входные данные не подлежат области определения функции");
                    break;}
                else{
                    values.Y_array[arrayc] = acosh(9*a*a+42*a*x+40*x*x+1);
                    arrayc++;}}

            file = fopen("/home/user/Labs/Lab_7/MathC15/text.txt","w");
            for(arrayc=0;arrayc<steps;arrayc++){
                fprintf(file,"|G=%lf|F=%lf|Y=%lf|\n",values.G_array[arrayc],values.F_array[arrayc],values.Y_array[arrayc]); }
            fclose(file);

            memset(&values,0,sizeof(values));

            file = fopen("/home/user/Labs/Lab_7/MathC15/text.txt","r");
            while (!feof(file)){
                fscanf(file,"%s",file_value);
                printf("%s\n",file_value);}
            fclose(file);
        }
        else
            break;}
    return 0;
}