#include <stdio.h>

union Number {
    int i;
    float f;
    double d;
};

int main() {
    union Number num;
    num.i = 10;
    printf("int: %d\n", num.i);
    num.f = 3.14;
    printf("float: %f\n", num.f);
    num.d = 2.718;
    printf("double: %lf\n", num.d);
    printf("int: %d\n", num.i);
    return 0;
}
