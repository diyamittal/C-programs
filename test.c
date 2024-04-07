#include<stdio.h>
int main(){
    int n,m;
    printf("enter size of array");
    scanf("%d%d",&n,&m);
    int a[n][m];
    printf("Enter values in 1st");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int b[n][m];
    printf("Enter values in 2nd");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&b[i][j]);
        }
    }
    int c[n][m];
    for(int i=0;i<n;i++){
        printf("\n");
        for(int j=0;j<m;j++){
            c[i][j]=0;
            for(int k=0;k<n;k++){
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("\n");
        for(int j=0;j<m;j++){
            printf("\t%d",c[i][j]);
        }
    }
    return 0;
}