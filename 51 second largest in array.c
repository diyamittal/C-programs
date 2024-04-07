#include<stdio.h>
int main(){
    int n;
    printf("Enter size of array");
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
        }
    int max=0,smax=0;
    for(int i=0;i<n;i++){
        if(a[i]>max){
            smax=max;
            max=a[i];
        }
        else if(a[i]>smax && a[i]<max){
            smax=a[i];
        }
    }
    printf("Second Largest number is %d",smax);
    return 0;
}