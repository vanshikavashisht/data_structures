#include<stdio.h>
int main()
{
int a=0,b=1,c;
int n;
scanf("%d",&n);
printf("%d",a);
printf("%d",b);
for(int i=0;i<n;i++)
{
c=a+b;
a=b;
b=c;

printf("%d",c);
}
}

