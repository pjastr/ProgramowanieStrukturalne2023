#include <stdio.h>
#include <stdlib.h>

int dlugosc1(char*napis)
{
    int i;
    for(i=0; napis[i] !=0; i++)
    {

    }
    return i;
}

int dlugosc2(char*napis)
{
    int i=0;
    while(napis[i] != 0)
    {
        i++;
    }
    return i;
}

int dlugosc3(char*napis)
{
    int i=0;
    while(napis[i])
    {
        i++;
    }
    return i;
}

int dlugosc4(char* napis)
{
    if (napis[0] == 0)
        return 0;
    return 1+dlugosc4(++napis);
}

int dlugosc5(char* napis)
{
    if (!napis[0])
        return 0;
    return 1+dlugosc5(++napis);
}

int dlugosc6(char* napis)
{
    if (!*napis)
        return 0;
    return 1+dlugosc6(++napis);
}

int main()
{
    char napis[20] = "Olsztyn";
    printf("%d\n", dlugosc6(napis));
    return 0;
}
