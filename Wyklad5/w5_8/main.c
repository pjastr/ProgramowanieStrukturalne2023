#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* wsk = malloc(sizeof(int));
    * wsk = 5;
    printf("%p\n",wsk);
    double* wsk2 = malloc(sizeof(double));
    * wsk2 = 5;
    printf("%p\n",wsk2);
    free(wsk);
    printf("%p\n",wsk);
    return 0;
}
