#include <stdio.h>

 int suma (int lhs, int rhs)
 {
   return lhs+rhs;
 }

 int main ()
 {
   int (*wsk_suma)(int, int);
   wsk_suma = suma;
   printf("4+5=%d\n", wsk_suma(4,5));
   return 0;
 }
