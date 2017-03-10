#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int *i,*j;
    i = NULL;
    j = NULL;
    char *line,input_line[100],vowels[5];
    line = NULL;
    size_t line_lenght;
    vowels[0] = 'a';
    vowels[1] = 'e';
    vowels[2] = 'i';
    vowels[3] = 'o';
    vowels[4] = 'u';
    vowels[5] = 'y';

    memset(input_line, 100, 0);
    printf("Введите побуквенно латинские символы: ");
    scanf("%s",input_line);
    line_lenght = strlen(input_line);
    input_line[line_lenght] = ' ';

    i = (int *) malloc(sizeof(int));
    j = (int *) malloc(sizeof(int));
    line = (char *) malloc(sizeof(char)*line_lenght+1);

    for (*i = 0; *i<line_lenght; (*i)++)
    {
        line[*i]=input_line[*i];
        if (strchr(vowels,line[*i]) != NULL)
        {
            printf("%c ", line[*i]);
        }
    }
    free(i);
    free(j);
    free(line);
    i = NULL;
    j = NULL;
    line = NULL;

    return 0;
}