#include <stdio.h>
int power(int n){
    for (int i = 1; i <= n; i++)
    {
        if (n == 1)
        {
            return 1;
        }
        return n * power(n);
    }
}
int main(){
    int a;
    printf("Enter the number");
    scanf("%d",&a);
    int k=power(a);
    printf("Product is %d",k);
    return 0;
}