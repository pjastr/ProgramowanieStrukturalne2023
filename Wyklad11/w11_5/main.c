#include <stdio.h>
#include <stdlib.h>

struct moja_struct {
    int a;
    char b;
    } moja = {1,'c'};

int main()
{
    printf("%d\n", moja.a);
    return 0;
}
