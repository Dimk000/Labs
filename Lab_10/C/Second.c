#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *i,*N;
    struct list{
        int x;
        int y;
    };
    struct list *abc;
    abc = NULL;
    i = NULL;
    N = NULL;
    i = (int *) malloc(sizeof(int));
    N = (int *) malloc(sizeof(int));
    printf("Введите кол-во строк чисел: ");
    scanf("%i",N);
    abc = (struct list*) malloc(*N*sizeof(struct list));
    for (*i = 0; *i<*N; (*i)++)
    {
        abc[*i].x = *i+2;
        abc[*i].y = *i*2;
    }
    for (*i = 0; *i<*N; (*i)++)
    {
        printf("%i\t %i\n",abc[*i].x,abc[*i].y);
    }
    free(i);
    free(N);
    free(abc);
    i = NULL;
    N = NULL;
    abc = NULL;

    return 0;
}