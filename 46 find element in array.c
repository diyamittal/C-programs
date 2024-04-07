#include<stdio.h>
int main(){
    int n,N;
    printf("Enter size of array");
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
        }
    printf("\nEnter number to search");
    scanf("%d",&N);
    for(int j=0;j<n;j++){
        if(N==a[j]){
            printf("%d is found at %d",N,j+1);
        }
    }
    return 0;
}