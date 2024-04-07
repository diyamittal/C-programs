#include<stdio.h>
#define pi 3.14
float area(int r){
    return pi*r*r;
}
int main(){
    int r;
    float res;
    printf("Enter radius of circle");
    scanf("%d",&r);
    res=area(r);
    printf("Area of circle is %f",res);
    return 0;
    }