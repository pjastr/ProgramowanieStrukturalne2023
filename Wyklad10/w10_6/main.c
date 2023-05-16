#include <stdio.h>
#include <stdlib.h>

void foo(int **tab, int n, int m)
{
    printf("%d\n", tab[0][0]);
}

int main()
{
    int **tab = (int**) malloc(sizeof(int*)*2);
    tab[0]=(int*) malloc(sizeof(int)*3);
    tab[1]=(int*) malloc(sizeof(int)*3);
    tab[0][0] = 7;
    *(*(tab+1)+2) = 4;
    foo(tab,2,3);
    return 0;
}
