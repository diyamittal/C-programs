#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
int selection(int arr[],int n){
    int min,j,temp;
    for(int i=0;i<n-1;i++){
        min=i;
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        if(min!=i){
            temp=arr[min];
            arr[min]=arr[i];
            arr[i]=temp;
        }
    }
}
int main(){
    int start;
    time_t t;
    start=time(&t);
    printf("time at start \t %d\n",start);
    int n;
    printf("Enter size");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements");
    printf("Before sorting");
    for(int i=0;i<n;i++){
        arr[i]=rand()%100000;
        printf("%d ",arr[i]);

    }
    selection(arr,n);
    printf("after sorting");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    int end;
    time_t l;
    end=time(&l);
    printf("time at end \t %d\n",end);
    int diff;
    diff=end-start;
    printf("time in all \t %d\n",diff);
    return 0;
}