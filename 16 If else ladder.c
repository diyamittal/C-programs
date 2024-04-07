#include<stdio.h>
int main(){
    int a,b,c,t;
    printf("Enter marks in three subjects");
    scanf("%d%d%d",&a,&b,&c);
    t=(a+b+c)/3;
    printf("%d",t);
    if(t>=80 & t<=100){
        printf("A");
    }
     else if(t>=70 & t<=80){
        printf("B");
    }
    else if(t>=60 & t<=70){
        printf("C");
    }
    else if(t>=50 & t<=60){
        printf("D");
    }
    else{
        printf("Fail");
    }
}