#include <stdio.h>
#include <stdlib.h>

void foo()
{
    int liczba =0;
    liczba++;
    printf("Wywolanie nr %d\n", liczba);
}

int main()
{
    foo();
    foo();
    foo();
    foo();
    return 0;
}
