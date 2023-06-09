#include <stdio.h>

struct Punkt {
    float x;
    float y;
};

typedef struct Punkt Punkt2D;

int main() {
    Punkt2D punkt = {3.0, 4.0};
    printf("Punkt: (%.1f, %.1f)\n", punkt.x, punkt.y);
    struct Punkt zmienna;
    return 0;
}
