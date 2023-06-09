#include <stdio.h>
#include <stdlib.h>

int main()
{
    char napis[25] = "CzerwiecCzerwiec";
    int a = napis[5]; //a=105
    char z = napis[3]; //a=105   , z=114 'r'
    int b = a^2; // a=105   , b=107  , z=114 'r'
    z++;  // a=105   , b=107  , z=115 's'
    z= (a-=2); // a=103   , b=107  , z=103'g'
    b -= a+2; // a=103   , b=2  , z=103'g'
    z--; // a=103   , b=2  , z=102'f'
    a = (b-=2); // a= 0  , b=0  , z=102'f'
    return 0;
}
