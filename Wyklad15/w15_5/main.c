#include <stdio.h>

union XYZ {
    int a;
    char b;
};

struct dane{
    union XYZ zaw;
    int typ; // 0 - int, 1 - char
};

int main()
{
    struct dane tab[6] =
    {
        { .zaw.a = 1, .typ = 0 },
        { .zaw.b = 'a', .typ = 1 },
        { .zaw.a = 2, .typ = 0 },
        { .zaw.b = 'b', .typ = 1 },
        { .zaw.a = 3, .typ = 0 },
        { .zaw.b = 'c', .typ = 1 }
    };
    for (int i = 0; i < 6; i++) {
        if (tab[i].typ == 0) {
            printf("%d\n", tab[i].zaw.a);
        } else {
            printf("%c\n", tab[i].zaw.b);
        }
    }
    return 0;
}
