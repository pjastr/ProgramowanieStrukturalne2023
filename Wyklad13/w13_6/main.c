#include <stdio.h>
#include <stdlib.h>

struct element
{
    int i;
    struct element * next;
};

int main()
{
    struct element * lista = malloc(sizeof(struct element));
    lista->next = malloc(sizeof(struct element));
    lista->next->i = 5;
    lista->next->next = malloc(sizeof(struct element));
    lista->next->next->i = 7;
    lista->next->next->next = malloc(sizeof(struct element));
    lista->next->next->next->i = -4;
    lista->next->next->next->next = NULL;
    struct element * temp = lista->next;
    while(temp != NULL)
    {
        printf("%d\n", temp->i);
        temp = temp->next;
    }
    printf("Dodanie\n");
    struct element * wsk = malloc(sizeof(struct element));
    wsk->i = 11;
    wsk->next = lista->next;
    lista->next = wsk;
    temp = lista->next;
    while(temp != NULL)
    {
        printf("%d\n", temp->i);
        temp = temp->next;
    }
    return 0;
}
