#include <stdio.h>
int swap(int a, int b){
    int c;
    c=a;
    a=b;
    b=c;
    printf("The value of a is %d",a);
    printf("The value of b is %d",b);
    return 0;
}
int main()
{
    int a,b;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    swap(a,b);
    return 0;
}