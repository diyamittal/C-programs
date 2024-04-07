#include <stdio.h>
#include<conio.h>

int main(){
    int i,n;
    printf("Enter any number for month");
    scanf("\n%d",&n);
      switch (n)
     {
        case 1:
           printf("January ");
        case 2:
           printf("February ");
        case 3:
           printf("March ");
        case 4:
           printf("April ");
        case 5:
           printf("May ");
           case 6:
           printf("June ");
           case 7:
           printf("July ");
           case 8:
           printf("August ");
           case 9:
           printf("September ");
           case 10:
           printf("October ");
           case 11:
           printf("November ");
           default:
           printf("December ");

     }
     return 0;
}
