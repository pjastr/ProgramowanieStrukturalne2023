#include <stdio.h>
#include <stdlib.h>

int suma(int n, int * tab)
{
    int temp =0;
    for(int i=0;i<n;i++)
    {
        temp += *(tab+i);
    }
    return temp;
}

int main()
{
    int *tab2 = malloc(4*sizeof(int));
    *(tab2+0) = 2;
    *(tab2+1) = 3;
    *(tab2+2) = 5;
    *(tab2+3) = 10;
    printf("%d\n", suma(4, tab2));
    return 0;
}
