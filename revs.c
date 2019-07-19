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
int *pt=arr;
for(int i=n-1;i>=0;i--)
{
printf("%d",*(pt+i));
}
}
