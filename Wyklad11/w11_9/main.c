#include <stdio.h>

struct Przyklad {
    int y;
    char x;
};

int main() {
    printf("Rozmiar struktury: %Iu bajty\n", sizeof(struct Przyklad));
    return 0;
}
