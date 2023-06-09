#include <stdio.h>

union XYZ {
    int a;
    char b;
};

int main()
{
    union XYZ xyz[6];
    xyz[0].a = 77;
    xyz[1].b = 'a';
    xyz[2].a = 95;
    xyz[3].b = 'b';
    xyz[4].a = 100;
    xyz[5].b = 'c';

    for (int i = 0; i < 6; i++)
    {
        printf("xyz[%d].a = %d\n", i, xyz[i].a);
        printf("xyz[%d].b = %c\n", i, xyz[i].b);
    }

    return 0;
}
