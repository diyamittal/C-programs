#include<stdio.h>
int main(){
    int n,m;
    printf("Enter size of 2D array");
    scanf("%d%d",&n,&m);
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d\n",a[i][j]);
        }
    }
    return 0;
}