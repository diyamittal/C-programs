#include <stdio.h>
int main()
{
    /* a program to produce a Celsius to Fahrenheit conversion chart for the
    numbers 1 to 100 */
    int celsius;
    for (celsius = 0; celsius <= 100; celsius++)
    {
        printf(“celsius: % d Fahrenheit: % d\n”, celsius, (celsius * 9) / 5 + 32);
    }
    return 0; 
}