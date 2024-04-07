#include<stdio.h>
int main(){
    int a,b;
    printf("Enter any two numbers");
    scanf("%d%d",&a,&b);
    printf("%d",(a>b)&&(a!=b));
    printf("%d",(a<b)||(b<a));
    printf("%d",!(a==b));
    return 0;
}