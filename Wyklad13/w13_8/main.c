#include <stdio.h>
#include <stdlib.h>

struct element
{
    int i;
    struct element * next;
};

struct element * dodaj_na_koniec(struct element * Lista, int a)
{
    struct element * wsk;
    wsk = Lista;
    if (Lista == NULL)
    {
        Lista = malloc(sizeof(struct element));
        Lista->i = a;
        Lista->next = NULL;
    }
    else
    {
        while (wsk->next != NULL)
        {
            wsk = wsk->next;
        }
        wsk->next = malloc(sizeof(struct element));
        wsk->next->i = a;
        wsk->next->next = NULL;
    }
    return Lista;
}

void wyswietl(struct element * Lista)
{
    struct element * wsk;
    wsk = Lista;
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
    struct element * Lista = NULL;
    wyswietl(Lista);
    Lista = dodaj_na_koniec(Lista, 5);
    wyswietl(Lista);
    // przypadek listy dwuelementowej
    struct element * lista2 = malloc(sizeof(struct element));
    lista2->i = 12;
    lista2->next = malloc(sizeof(struct element));
    lista2->next->i = -8;
    lista2->next->next = NULL;
    wyswietl(lista2);
    lista2 = dodaj_na_koniec(lista2, 3);
    wyswietl(lista2);
    return 0;
}
