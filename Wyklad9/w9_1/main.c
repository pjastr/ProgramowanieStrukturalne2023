#include <stdio.h>
#include <stdlib.h>

int main()
{
    char buffer[20];
    int a=524243;
    int b=7;
    snprintf(buffer,5*sizeof(char),"%5d+%5d=%5d",a,b,a+b);
    printf("%s",buffer);
    return 0;
}
