#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tab[] = {3, 2, 5, -4, 5, 8, 7};
    int *wsk=tab;
    int b = *(wsk+=2); //b=5
    int c = b+2; // b=5  , c=7
    int d = (b/=-4) ^ (c-=-2); // b=-1  , c=9  , d=-10
    int e = (wsk+=-1)[2]; // b=-1  , c=9  , d=-10  , e=-4
    e = (d *= 4) + (c /= 3); // b=-1  , c=3  , d=-40  , e=-37
    c = d - (b+=6); // b=5  , c=-45  , d=-40  , e=-37
    b = *wsk + e; // b=-35  , c=-45  , d=-40  , e=-37
    d = b * c % e; // b=-35  , c=-45  , d=21  , e=-37
    return 0;
}
