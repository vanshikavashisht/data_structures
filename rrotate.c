#include<stdio.h>
int main(int argc,char *argv[])
{
	int arr[argc-1],n;
	for(int i=1;i<argc-1;i++)
	{
		arr[i]=atoi(argv[i]);
	}
	n=atoi(argv[argc-1]);
	printf("%d",n);
	int temp[argc-1];
	for(int i=0;i<argc-1;i++)
	{
		temp[i]=arr[i];
	}
	for(
		printf("%d",temp[i]);
	}
}
