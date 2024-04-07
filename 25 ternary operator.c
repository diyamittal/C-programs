#include<stdio.h>
int main(){
    int a,b;
    printf("Enter numbers");
    scanf("%d%d",&a,&b);
    (a>b)?printf("a is greater"):printf("b is greater");
    return 0;
}