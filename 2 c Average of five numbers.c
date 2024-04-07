#include <stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("Enter five numbers");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    float avg=(a+b+c+d+e)/5;
    printf("The average of numbers is %f",avg);
    return 0;
}