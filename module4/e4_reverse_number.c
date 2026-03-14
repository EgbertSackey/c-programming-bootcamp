#include <stdio.h>
int main()
{
    int pos_num = 0;
    printf("Enter a positive number: ");
    scanf("%d", &pos_num);
    printf("Reversed: ");
    while (pos_num > 0) {
        printf("%d", pos_num % 10);
        pos_num = pos_num / 10;
    }
    printf("\n");
    return 0;
}
