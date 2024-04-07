#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
int insertion(int arr[],int n){
    int key,j;
    for(int i=1;i<n;i++){
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
}
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
int bubble(int arr[],int n){
    int temp;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main(){
    int start;
    time_t t;
    start=time(&t)*1000;
    printf("time at start \t %d msec\n",start);
    int n;
    printf("Enter size");
    scanf("%d",&n);
    int a[n];
    srand(time(0));
    printf("Before sorting");
    for(int i=0;i<n;i++){
        a[i]=rand()%100000;
        printf("%d ",a[i]);

    }
    insertion(a,n);
    printf("after sorting");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    int end;
    time_t l;
    end=time(&l)*1000;
    printf("time at end \t %d msec\n",end);
    int diff;
    diff=end-start;
    int final=diff;
    printf("time in all \t %d msec\n",final);
    return 0;
}