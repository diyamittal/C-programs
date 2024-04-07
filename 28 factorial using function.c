#include <stdio.h>
int fac(int n)
{
    int f = 1;
    for (int i = 1;i<=n; i++){
        f = f * i;
    }
        return f;
}
int main(){
    int n, fact;
    printf("enter number");
    scanf("%d", &n);
    fact=fac(n);
    printf("factorial of the number %d", fact);
    return 0;
}
