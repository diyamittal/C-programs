#include <stdio.h>
int main()
{
    char n;
    printf("Enter any character");
    scanf("%c", &n);
    switch (n)
    {
    case 1:
        n >= 'A' && n <= 'Z';
        printf("uppercase");
        break;
    case 2:
        n >= 'a' && n <= 'z';
        printf("lowercase");
        break;
    case 3:
        n >= 0;
        printf("digit");
        break;

    default:
        printf("special character");
        break;
    }
    return 0;
}