#include <stdio.h>
#include <stdlib.h>

struct element
{
    int i;
    struct element * next;
};

void dodaj_na_koniec(struct element * Lista, int a)
{
    struct element * wsk;
    wsk = Lista;
    while (wsk->next != NULL)
    {
        wsk = wsk->next;
    }
    wsk->next = malloc(sizeof(struct element));
    wsk->next->i = a;
    wsk->next->next = NULL;
}

void wyswietl(struct element * Lista)
{
    struct element * wsk;
    wsk = Lista->next;
    if (wsk == NULL)
    {
        printf("Lista jest pusta\n");
        return;
    }
    while (wsk != NULL)
    {
        printf("%d\n", wsk->i);
        wsk = wsk->next;
    }
    printf("---\n");
}

int main()
{
    // przypadek pusty
    struct element * Lista1 = malloc(sizeof(struct element));
    Lista1->next = NULL;
    wyswietl(Lista1);
    dodaj_na_koniec(Lista1, 5);
    wyswietl(Lista1);
    // przypadek dwuelementowy
    struct element * Lista2 = malloc(sizeof(struct element));
    Lista2->next = malloc(sizeof(struct element));
    Lista2->next->i = 12;
    Lista2->next->next = malloc(sizeof(struct element));
    Lista2->next->next->i = -8;
    Lista2->next->next->next = NULL;
    wyswietl(Lista2);
    dodaj_na_koniec(Lista2, 3);
    wyswietl(Lista2);
    return 0;
}
