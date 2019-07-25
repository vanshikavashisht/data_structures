#include<stdio.h>
int main()
{
int n,temp,tem;
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
temp=arr[(n-1)/2];
for(int i=n/2;i>0;i--)
{
arr[i]=arr[i-1];
}
arr[0]=temp;
}
for(int i=0;i<t;i++)
{
tem=arr[n/2+1];
for(int i=n/2+1;i<n;i++)
{
arr[i]=arr[i+1];
}

arr[n-1]=tem;
}
for(int i=0;i<n;i++)
{
printf("%d",arr[i]);
}
}
