#include<stdio.h>
int main(){
    int a[5], even=0, odd=0;
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    for(int j=0;j<5;j++){
        if(a[j]%2==0){
            even=even+a[j];
        }
        else{
            odd=odd+a[j];
        }
    }
    printf("Sum of even numbers is %d",even);
    printf("Sum of odd numbers is %d",odd);
    return 0;
}