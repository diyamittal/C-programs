#include<stdio.h>
int get_pivot(int a[],int n)
{
int s=0,e=n-1;
int mid = s + (e-s)/2;
while(s<e)
{
if(a[mid]>=a[0])
{
s = mid +1;
}
else 
{ 
 e=mid;
}
 mid = s+(e-s)/2;
}
return s;
}
int key_beforepiv(int a[],int n,int k)
{ 
 int p = get_pivot(a,5);
int s=0,e=p-1;
int mid = s+(e-s)/2; 
while(s<=e)
{
if(a[mid]==k)
{
return mid;
}
else if(a[mid]<k)
{
s=mid +1;
}
else 
{ e = mid -1;
}
mid = s+(e-s)/2;
}
return mid;
}
int key_afterpiv(int a[],int n,int k)
{ 
int p = get_pivot(a,5);
int s=p,e=n-1;
int mid = s+(e-s)/2; 
while(s<=e)
{
if(a[mid]==k)
{
return mid;
}
else if(a[mid]<k)
{
s=mid +1;
}
else 
{ e = mid -1;
}
mid = s+(e-s)/2;
}
return mid;
}
int main()
{
int a[5]={7,9,1,2,3};
int k;
int p = get_pivot(a,5);
printf("%d",p);
printf(" Enter key to be searched\n");
scanf("%d",&k);
int index;
if (k==a[p])
{
printf("Element founf at %d",p);
}
else if(k>a[p]&&k>a[4])
{
index = key_beforepiv(a,5,k);
}
else
{
index =key_afterpiv(a,5,k);
}
 
 printf("%d",index);
return 0;
}