#include <stdio.h>
int main()
{
    int n = 0;
    printf("Enter a number: ");
    if (scanf("%d", &n) != 1) {
        printf("Follow instructions!\n");
    } else {
        for (int i = 1; i <= 12; i++) {
            printf("%d x %d = %d\n", n, i, (n * i));
        }
    }
    return 0;
}
