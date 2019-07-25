#include<stdio.h>
int main(int argc,char *argv[])
{
	int arr[argc-2],temp[argc-2];
	for(int i=1;i<argc-2;i++)
	{
		arr[i]=atoi(argv[argc-1]);
	}
	int n=argc-1;
	for(int i=argc-2;i>argc-n-1;i--)
	{
		temp[n]=arr[i];
		n--;
	}
	for(int i=1;i<argc-2;i++)
	{
		arr[i+2]=arr[i];

	}
	for(int i=1;i<argc-1-n;i++)
	{
		arr[i]=temp[i];
	}
	for(int i=1;i<argc-2;i++)
	{
		printf("%d",arr[i]);
	}
}
