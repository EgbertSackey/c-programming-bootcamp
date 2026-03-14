#include <stdio.h>
int main()
{
    printf("Enter the temperature in Celsius:\n");
    double celsius = 0;
    scanf("%lf", &celsius);
    double temp_in_fahrenheit = ((celsius * (9.0 / 5.0)) + 32);
    printf("The temperature is %.2lf F\n", temp_in_fahrenheit);
    return 0;
}
