#include<stdio.h>
int main()
{
int n,j,temp=0,tem=0;
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
j=n-1;
int s=0,l=n-1;
temp=arr[s];
arr[s]=arr[l];
arr[l]=temp;
for(int i=0;i<n/2;i++)
{
tem=arr[i+1];
arr[i+1]=arr[j-1];
arr[j-1]=tem;
j--;
}
for(int i=0;i<n;i++)
{
printf("%d",arr[i]);
}
}
