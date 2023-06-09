#include <stdio.h>
#include <stdlib.h>

enum Smartfon {LG, Samsung, Apple};

int main()
{
    enum Smartfon tab[6] = {Samsung,LG,Apple,Samsung,LG,LG};
    for(int i=0;i<6;i++)
    {
        if (tab[i] == Samsung)
        {
            printf("Samsung");
        }
        else
        {
            printf("Cos innego");
        }
    }
    return 0;
}
