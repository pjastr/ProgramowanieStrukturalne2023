#include <stdio.h>

int main ()
{
   int liczba = 5;
   int * wsk;
   wsk=&liczba;
   printf("Adres zmiennej: %p\n", wsk );
   printf("Adres zmiennej przechowujacej wsk.: %p\n", &wsk );
   printf("Wyluskiwanie wskaznika: %d\n", *wsk);
   return 0;
}
