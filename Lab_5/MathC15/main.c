#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

double acosh(double);

int main()
{
    double a,x,G,F,Y,from_x,to_x,i,j,from_a,to_a,x_step,a_step;
    long int steps,arrayc=0,counter=0,coincidences=0,string_index=0;
    char b,string_value[100],sample[100],string_array[100],one_string[1000];

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
            printf("Введите шаблон: ");
            scanf("%s",sample);
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
                        for(counter=0;counter<arrayc;counter++){
                            sprintf(string_array,"%lf",G_array[counter]);
                            strcat(one_string,string_array);}
                        while (string_index < strlen(one_string)){
                            if (strstr(one_string,sample) - one_string + 1 < strlen(one_string)){
                                coincidences++;
                                string_index = strstr(one_string,sample) - one_string + 1;
                                while (counter != string_index){
                                    one_string[counter] = '_';
                                    counter++;}
                                counter=0;}
                            if(strstr(one_string,sample)==0)
                                break;}
                        printf("Количество найденых совпадений: %li\n",coincidences);
                        coincidences = 0;
                        string_index = strlen(one_string);
                        while (string_index != 0){
                            for (counter = 0; counter<string_index;counter++){
                                one_string[counter] = one_string[counter+1];}
                        string_index--;}
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
                            F_array[arrayc] = F;
                            arrayc+=1;}}
                        for(counter=0;counter<arrayc;counter++){
                            sprintf(string_array,"%lf",F_array[counter]);
                            strcat(one_string,string_array);}
                        while (string_index < strlen(one_string)){
                            if (strstr(one_string,sample) - one_string + 1 < strlen(one_string)){
                                coincidences++;
                                string_index = strstr(one_string,sample) - one_string + 1;
                                while (counter != string_index){
                                    one_string[counter] = '_';
                                    counter++;}
                                counter=0;}
                            if(strstr(one_string,sample)==0)
                                break;}
                        printf("Количество найденых совпадений: %li\n",coincidences);
                        coincidences = 0;
                        string_index = strlen(one_string);
                        while (string_index != 0){
                            for (counter = 0; counter<string_index;counter++){
                                one_string[counter] = one_string[counter+1];}
                        string_index--;}
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
                            Y_array[arrayc] = Y;
                            arrayc+=1;}}
                        for(counter=0;counter<arrayc;counter++){
                            sprintf(string_array,"%lf",Y_array[counter]);
                            strcat(one_string,string_array);}
                        while (string_index < strlen(one_string)){
                            if (strstr(one_string,sample) - one_string + 1 < strlen(one_string)){
                                coincidences++;
                                string_index = strstr(one_string,sample) - one_string + 1;
                                while (counter != string_index){
                                    one_string[counter] = '_';
                                    counter++;}
                                counter=0;}
                            if(strstr(one_string,sample)==0)
                                break;}
                        printf("Количество найденых совпадений: %li\n",coincidences);
                        coincidences = 0;
                        string_index = strlen(one_string);
                        while (string_index != 0){
                            for (counter = 0; counter<string_index;counter++){
                                one_string[counter] = one_string[counter+1];}
                        string_index--;}
                    break;
                default:
                    printf("%s\n","Ошибка");
            }
        }
        else
            break;}
    return 0;
}