#include<stdio.h>
#include<conio.h>
int main(){
    int n;
    int f=1;
    printf("enter number");
    scanf("%d",&n);
    for(int i=1,i<=n,i++){
        f=f*i;
        print("factorial of the number %d",f);
    return 0;
    }
}