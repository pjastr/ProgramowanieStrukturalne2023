#include <stdio.h>
#include <stdlib.h>
//#include <string.h>

int main()
{
    char nap1[] = "Hello\0 World";
    char nap2[50] = "Hello World";
    printf("%s.\n", nap1);
    printf("%Iu\n",sizeof nap1);
    printf("%Iu\n",strlen(nap1));
    printf("%s.\n", nap2);
    return 0;
}
