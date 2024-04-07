#include<stdio.h>
int main(){
    int a;
    printf("Enter a number");
    scanf("%d",&a);
    int n=a;
    int sum=0;
    while(n!=0)
    {
        int r=n%10;
    sum=sum+r*r*r;
    n=n/10;
    }

    if(a==sum){
        printf("Armstrong");
    }
    else{
        printf("Not a Armstrong");
    }
    return 0;
}
