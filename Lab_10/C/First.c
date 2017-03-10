#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *p, *s, *i, *N;
    p = NULL;
    s = NULL;
    i = NULL;
    N = NULL;

    N = (int*) malloc(sizeof(int));
    printf("Введите кол-во чисел: ");
    scanf("%d",N);

    p = (int *) malloc(*N * sizeof(int));
    s = (int *) malloc(*N * sizeof(int));
    i = (int *) malloc(sizeof(int));
    for ( *i = 0; *i < *N; (*i)++)
    {
        p[*i] = *i + 1;
    }

    for ( *i = 0; *i < *N; (*i)++)
    {
        s[*i] = p[*i]*p[*i];
    }

    printf("Число\tКвадрат\n");
    printf("_______________\n");

    for ( *i = 0; *i < *N; (*i)++)
    {
        printf("  %d\t  |   %d\n",p[*i],s[*i]);
    }

    free(p);
    free(s);
    free(i);
    free(N);
    p = NULL;
    s = NULL;
    i = NULL;
    N = NULL;

    return 0;
}