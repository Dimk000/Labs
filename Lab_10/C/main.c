#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 9

int main(void)
{
    int *p, *s;
    p = NULL;
    s = NULL;
    p = (int *) malloc(N * sizeof(int));
    s = (int *) malloc(N * sizeof(int));
    for (int i = 0; i < N; i++)
    {
        p[i] = i+1;
    }
    for (int i = 0; i < N; i++)
    {
        s[i] = p[i]*p[i];
    }

    printf("Число\tКвадрат\n");

    for(int i= 0; i<N;i++)
    {
        printf("  %d\t\t  %d\n",p[i],s[i]);
    }

    free(p);
    free(s);
    p = NULL;
    s = NULL;

    return 0;
}