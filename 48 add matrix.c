#include<stdio.h>
int main(){
    int n,m;
    printf("Enter size of 2D array");
    scanf("%d%d",&n,&m);
    int a[n][m],b[n][m];
    printf("Enter first matrix");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter second matrix");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&b[i][j]);
        }
    }
    int c[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("\t%d",a[i][j]+b[i][j]);
        }
    }
    return 0;
}