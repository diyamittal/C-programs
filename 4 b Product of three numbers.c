#include <stdio.h>
int main()
{
    int a,b,c,Prdt;
    printf("Enter three numbers");
    scanf("%d%d%d",&a,&b,&c);
    Prdt=a*b*c;
    printf("The product of a,b and c is %d",Prdt);
    return 0;
}