#include <stdio.h>
int main()
{
    char operator;
    int num1, num2;
    printf("Enter number 1: ");
    scanf("%d", &num1);
    printf("Select operator (+, -, *, /): ");
    scanf(" %c", &operator);
    printf("Enter number 2: ");
    scanf("%d", &num2);
    switch (operator) {
        case '+':
            printf("Result: %d\n", num1 + num2);
            break;
        case '-':
            printf("Result: %d\n", num1 - num2);
            break;
        case '*':
            printf("Result: %d\n", num1 * num2);
            break;
        case '/':
            if (num2 == 0)
                printf("Learn Math! Division by zero isn't possible!\n");
            else
                printf("Result: %d\n", num1 / num2);
            break;
        default:
            printf("What did you say please?\n");
    }
    return 0;
}
