#include <stdio.h>
#include <stdlib.h>

int suma(int n, int tab[])
{
    int temp =0;
    for(int i=0;i<n;i++)
    {
        temp += tab[i];
    }
    return temp;
}

int main()
{
    int tab1[] = {2,3};
    printf("%d\n", suma(2, tab1));
    int tab2[] = {2,3, 5, 10};
    printf("%d\n", suma(4, tab2));
    printf("%Iu\n", sizeof(int*));
    return 0;
}
