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
int sum;
scanf("%d",&sum);
for(int i=0;i<n;i++)
{
for(int j=i+1;j<n;j++)
{
s=arr[i]+arr[j];
if(sum==s)
{
printf("%d",arr[i]);
printf("%d",arr[j]);
}
}
}
}

