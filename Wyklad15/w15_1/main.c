#include <stdio.h>
#include <stdlib.h>

int cc(double x)
{
    int temp=0;
    while(temp<=x)
    {
        temp++;
    }
    return temp-1;
}

int foo(double (*f1)(double), double (*f2)(double), double x)
{
    if (x<1)
        return -1;
    int n = cc(x);
    for(int i=1;i<=n;i++)
    {
        if (f1(i) != f2(i)*f2(i)*f2(i))
            return -1;
    }
    return 1;
}

double pom1(double a)
{
    return a*a*a;
}

double pom2(double a)
{
    return ((int)a)%3;
}

int main()
{
    printf("%d\n", cc(3));
    printf("%d\n", foo(pom1,pom2,-2));
    printf("%d\n", foo(pom1,pom2,2));
    printf("%d\n", foo(pom1,pom2,6));
    return 0;
}
