#include <stdio.h>
#include <stdlib.h>

enum miasta {OLSZTYN, GDANSK, KRAKOW, WARSZAWA, BYDGOSZCZ};

int main()
{
    enum miasta m1 = KRAKOW;
    //printf("%s\n",m1);
    printf("%d\n",m1);
    printf("%u\n",m1);
    return 0;
}
