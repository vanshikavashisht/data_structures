#include<stdio.h>
int main()
{
int n,temp;
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
int t;
scanf("%d",&t);
for(int i=0;i<t;i++)
{
temp=arr[n-1];
for(int i=n-1;i>0;i--)
{
arr[i]=arr[i-1];
}
arr[0]=temp;
}
for(int i=0;i<n;i++)
{
printf("%d",arr[i]);
}
}
