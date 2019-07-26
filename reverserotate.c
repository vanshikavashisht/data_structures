#include<stdio.h>
int main()
{
int n,s=0,temp;
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
int t,tem=0;
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
printf("rotated array");
printf("\n");
for(int i=0;i<n;i++)
{
printf("%d",arr[i]);
}
for(int i=0;i<t;i++)
{
tem=arr[0];
for(int i=0;i<n;i++)
{
arr[i]=arr[i+1];
}

arr[n-1]=tem;
}
printf("\n");
printf("reversed effect on rotated array");
printf("\n");
for(int i=0;i<n;i++)
{
printf("%d",arr[i]);
}
}
