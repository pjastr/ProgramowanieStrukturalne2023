#include <stdio.h>
#include <stdlib.h>
#define ROZMIAR 3

int main()
{
    int tab[ROZMIAR] = {4,0,-2};
    printf("%i",tab==&tab[0]);
    return 0;
}
