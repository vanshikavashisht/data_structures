#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
int r;
scanf("%d",&r);
int temp[r];
int tem=r-1;
for(int i=n-1;i>=n-r;i--)
{
temp[tem]=arr[i];
tem--;
}
for(int i=n-r;i<n;i++)
{
arr[i]=0;
}
for(int i=0;i<n;i++)
{
arr[i+r]=arr[i];
}
for(int i=0;i<r;i++)
{
arr[i]=temp[i];
}
for(int i=0;i<n;i++)
{
printf("%d",arr[i]);
}
}
