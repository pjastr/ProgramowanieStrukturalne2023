#include <stdio.h>
#include <stdlib.h>

void foo(int * x)
{
    x=0x5;
}

int main()
{
    int a =4;
    printf("%p\n", &a);
    foo(&a);
    printf("%d\n", a);
    printf("%p\n", &a);
    return 0;
}
