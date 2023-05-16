#include <stdio.h>
#include <stdlib.h>

// Definicja struktury
struct Punkt2D {
    float x;
    float y;
};

int main() {
    // Alokacja pami�ci dla struktury Punkt2D
    struct Punkt2D *punkt = (struct Punkt2D *)malloc(sizeof(struct Punkt2D));

    // Przypisanie warto�ci do p�l struktury poprzez wska�nik
    punkt->x = 3.0;
    punkt->y = 4.0;

    printf("Punkt przed przesunieciem: (%.1f, %.1f)\n", punkt->x, punkt->y);

    // Przesuni�cie punktu o wektor (2.0, 3.0)
    punkt->x += 2.0;
    punkt->y += 3.0;

    printf("Punkt po przesunieciu: (%.1f, %.1f)\n", punkt->x, punkt->y);

    // Zwolnienie zaalokowanej pami�ci
    free(punkt);

    return 0;
}
