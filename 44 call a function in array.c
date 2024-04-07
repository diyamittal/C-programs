#include<stdio.h>
#include<conio.h>
void input(int b[], int n){
    printf("Enter values");
    for(int i=0;i<n;i++){
        scanf("%d",&b[i]);
    }
}
void output(int c[], int m){
    printf(" values\n");
    for(int i=0;i<m;i++){
        printf("%d\n",c[i]);
    }
}
int main(){
    int N;
    int a[N];
    printf("Enter size\n");
    scanf("%d",&N);
    input(a,N);
    output(a,N);
    return 0;
}