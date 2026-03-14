#include <stdio.h>
int main()
{
    int a = 5;
    int b = 99;
    int temp;
    printf("Before: a=%d, b=%d\n", a, b);
    temp = a;
    a = b;
    b = temp;
    printf("After: a=%d, b=%d\n", a, b);
    return 0;
}
