#include <stdio.h>
int main()
{
    int a,b,c,d,e,f;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    c=a+b;
    d=a-b;
    e=a*b;
    f=a/b;
    printf("The sum of a and b is %d",c);
    printf("The difference of a and b is %d",d);
    printf("The product of a and b is %d",e);
    printf("The division of a and b is %d",f);
    return 0;
}