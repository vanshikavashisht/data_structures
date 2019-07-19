#include<stdio.h>
int main()
{
int n,k=0,l=0,u=0,out=0,off=0;
scanf("%d",&n);
int arr[n],p[n],ne[n],z[n];
for(int i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
for(int i=0;i<n;i++)
{
if(arr[i]>0)
{
p[k]=arr[i];
k++;
}
else if(arr[i]<0)
{
ne[l]=arr[i];
l++;
}
else
{
z[u]=arr[i];
u++;
}
}
for(int i=0;i<u;i++)
{
printf("%d",z[i]);
}
for(int i=0;i<k;i++)
{
printf("%d",p[i]);
while(i>=out )
{
for(int j=i;j<l;j++)
{
printf("%d",ne[j]);
}
out++;
}
}
}
