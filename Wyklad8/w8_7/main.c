#include <stdio.h>

int main()
{
    char slowo[5];
    gets(slowo);
    printf("%s\n",slowo);
    printf("%p\n",slowo);
    puts(slowo);
    return 0;
}
