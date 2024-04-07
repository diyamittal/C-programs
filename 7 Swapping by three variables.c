#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    c=a;
    a=b ;
    b=c ;
    printf("The value of a is %d",a);
    printf("The value of b is %d",b);
    return 0;
}