#include <stdio.h>
#include <stdlib.h>

#pragma pack ( 1 )
 struct Struktura {
   double pole2;
   int pole1;

   char pole3;
 };

int main()
{
    struct Struktura zmiennaS =
        { .pole1=60, .pole2=0.2, .pole3='a'};
    printf("%p\n",&zmiennaS.pole1);
    printf("%p\n",&zmiennaS.pole2);
    printf("%p\n",&zmiennaS.pole3);
    printf("%Iu\n", sizeof(struct Struktura));
}
