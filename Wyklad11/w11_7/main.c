#include <stdio.h>
#include <stdlib.h>

 struct Struktura {
   int pole1;
   int pole2;
   char pole3;
 };

int main()
{
    struct Struktura zmiennaS =
        { .pole1=60, .pole2=0.2, .pole3='a'};
    printf("%d\n",zmiennaS);
    printf("%p\n",&zmiennaS);
    printf("%p\n",&zmiennaS.pole1);
    printf("%p\n",&zmiennaS.pole2);
    printf("%p\n",&zmiennaS.pole3);
    printf("%Iu\n", sizeof(zmiennaS));
    printf("%Iu\n", sizeof(struct Struktura));
}
