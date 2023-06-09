#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Album
{
    char nazwa[100];
    int liczba_utworow;
};

struct Album * initAlbum(char nazwa[100], int liczba_utworow)
{
    struct Album * temp = malloc(sizeof(struct Album));
    if (strlen(nazwa)<3 || liczba_utworow <=1)
    {
        return NULL;
    }
    strcpy(temp->nazwa, nazwa);
    temp->liczba_utworow = liczba_utworow;
    return temp;
};

void dodaj_utwory(struct Album * arg)
{
    arg->liczba_utworow +=5;
}

int main()
{
    struct Album * al1 = initAlbum("ABC", 0);
    if (al1 != NULL)
    {
        printf("%s %d\n", al1->nazwa, al1->liczba_utworow);
        dodaj_utwory(al1);
        printf("%s %d\n", al1->nazwa, al1->liczba_utworow);
    }
    return 0;
}
