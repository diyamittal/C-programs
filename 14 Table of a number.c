#include<stdio.h>
int main(){
    int n,a;
    printf("Enter number");
    scanf("%d",&n);
    for(int i=1;i<11;i++){
        a=n*i;
        printf("\n%d * %d = %d",n,i,a);
    }
    return 0;
}