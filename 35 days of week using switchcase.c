#include <stdio.h>
#include<conio.h>

int main(){
    int i,n;
    printf("Enter any number for month");
    scanf("\n%d",&n);
      switch (n)
     {
        case 1:
           printf("Monday ");
           break;
        case 2:
           printf("Tuesday ");
           break;
        case 3:
           printf("Wednesday ");
           break;
        case 4:
           printf("Thursday ");
           break;
        case 5:
           printf("Friday ");
           break;
        case 6:
           printf("Saturday ");
           break;
        default:
           printf("Sunday ");
           break;

     }
     return 0;
}