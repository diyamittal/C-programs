#include <stdio.h>
int fib(int n)
{
    if (n == 1)
    {
        return 0;
    }
    else if (n == 2 || n == 3)
    {
        return 1;
    }
    else
    {
        return fib(n - 1) + fib(n - 2);
    }
}
int main()
{
    int i, n, k;
    printf("Enter value till which the series be printed");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        k = fib(i);
        printf("%d\t", k);
    }
    return 0;
}