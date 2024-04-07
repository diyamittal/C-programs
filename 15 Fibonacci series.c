#include <stdio.h>
int main() 
{ 
int n,i;
int a=0,b=1,c=0;
printf("Enter number for fibonacci series");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("\t%d",a);
c=b;
b=a;
a=c+b;
}
return 0;
}