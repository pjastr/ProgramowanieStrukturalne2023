#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c,d;
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    scanf("%f", &d);
    if (a<0)
        a *= -1;
    if (c > d)
        printf("0\n");
    else
    {
        int temp=0;
        for(int i=1;a*i*i+b*i+c<=d;i++)
        {
            temp=i;
        }
        printf("%d\n",temp+1);
    }
    return 0;
}
