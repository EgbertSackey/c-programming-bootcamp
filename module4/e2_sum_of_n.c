#include <stdio.h>
int main()
{
    int N = 0;
    int sum = 0;
    printf("Enter number, N: ");
    scanf("%d", &N);
    for (int i = 1; i <= N; i++) {
        sum += i;
    }
    printf("Sum from 1 to %d = %d\n", N, sum);
    return 0;
}
