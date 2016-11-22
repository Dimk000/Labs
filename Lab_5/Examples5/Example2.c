#include <stdio.h>
#include <string.h>
int main(void)
{
    char mystring[255];


    scanf("%s", mystring);
    printf("%d\n", (int) strlen(mystring));
    return 0;
}