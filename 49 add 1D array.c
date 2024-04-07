#include<stdio.h>
int main(){
    int n;
    printf("Enter size of array");
    scanf("%d",&n);
    int a[n],b[n];
    printf("Enter first array");
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
        }
    printf("Enter second array");
    for(int i=0; i<n; i++){
        scanf("%d",&b[i]);
        }
    for(int j=0; j<n; j++){
        printf("%d",a[j]+b[j]);
    }
    return 0;
}