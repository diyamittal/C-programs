#include<stdio.h>
int main(){
    int n;
    printf("Enter size of array");
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
        }
    for(int j=0;j<n;j++){
        printf("\n%d",a[j]);
    }
    return 0;
}