#include <stdio.h>
int main()
{
    int num,a,b,c,sum;
    printf("Enter a number");
    scanf("%d", &num);
    a= num%10;
    num=num/10;
    b= num%10;
    num=num/10;
    c= num%10;
    sum=a+b+c;
    printf("Sum of digits is %d",sum);

}