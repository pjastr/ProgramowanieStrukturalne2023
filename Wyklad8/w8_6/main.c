#include <stdio.h>

int main()
{
    char slowo[10];
    scanf("%s",slowo);
    printf("%s\n",slowo);
    for(int i=0;i<10;i++)
    {
        printf("%d %c\n", i, slowo[i]);
    }
    return 0;
}
