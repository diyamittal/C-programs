#include<stdio.h>
int main(){
    int a;
    printf("Enter number");
    scanf("%d",&a);
    if(a<0){
        printf("Number is negative");
    }
    else{
        printf("Number is not negative");
    }
    return 0;
}