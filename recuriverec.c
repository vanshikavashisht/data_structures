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
rev(arr[],n);
}
void rev(int arr[],int n)
{
for(int i=0;i<n/2;i++)
{
tem=arr[i];
arr[i]=arr[j];
arr[j]=tem;
j--;
}
rev(arr,n-1);
for(int i=0;i<n;i++)
{
printf("%d",arr[i]);
}
}
