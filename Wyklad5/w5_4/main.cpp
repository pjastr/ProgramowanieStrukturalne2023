#include <iostream>

using namespace std;

void funkcja_przyjmujaca_referencje(int &ref)
{
    ref = 50;
}

void funkcja_przyjmujaca_wskaznik(int *ptr)
{
    if (ptr) {
        *ptr = 100;
    }
}

int main()
{
    int a = 10;
    int b = 20;
    funkcja_przyjmujaca_referencje(a);
    cout << "a=" << a << endl;
    funkcja_przyjmujaca_wskaznik(&b);
    cout << "b=" << b << endl;
    return 0;
}
