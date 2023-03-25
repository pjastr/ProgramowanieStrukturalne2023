#include <stdio.h>

int dodaj(int a, int b)
{
    return a + b;
}

int odejmij(int a, int b)
{
    return a - b;
}

int wykonaj_operacje(int (*operacja)(int, int), int a, int b)
{
    return operacja(a, b);
}

int main()
{
    int a = 5, b = 11;
    int (*wsk_dodaj)(int, int) = dodaj;
    int (*wsk_odejmij)(int, int) = odejmij;
    printf("Dodawanie: %d\n", wykonaj_operacje(wsk_dodaj, a, b));
    printf("Odejmowanie: %d\n", wykonaj_operacje(wsk_odejmij, a, b));
    return 0;
}
