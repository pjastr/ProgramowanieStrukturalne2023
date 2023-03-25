#include <stdio.h>

void idzPrawoDol(int x, int y)
{
    printf("Adres w f x %p\n", &x);
    printf("Adres w f y %p\n", &y);
    x=x+1;
    y=y-1;
}

int main()
{
    int x=20, y=15;
    printf("Adres x %p\n", &x);
    printf("Adres y %p\n", &y);
    idzPrawoDol(x,y);
    printf("Aktualna pozycja: [ %d, %d ] \n",x,y);
    return 0;
}
