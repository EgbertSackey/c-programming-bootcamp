#include <stdio.h>
int main()
{
    printf("Please enter a number:\n");
    int num = 0;
    scanf("%d", &num);
    if (num % 2 == 0) {
        printf("Even\n");
    } else {
        printf("Odd\n");
    }
    return 0;
}
