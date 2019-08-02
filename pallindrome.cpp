#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char s[100],a[100],temp[100];
	cin>>s;
	int j=0;
	int n=strlen(s);
	for(int i=0;i<n;i++)
	{
		temp[i]=s[i];

	}
	temp[n]='\0';
	for(int i=n-1;i>=0;i--)
	{
		a[j]=s[i];
	j++;	
	}
	a[j]='\0';
	int flag=0;
	for(int i=0;i<n;i++)
	{
	if(temp[i]==a[i])
	{
	flag=1;
	}
	else
	flag=0;
	}
	if(flag==1)
	{
		cout<<"pallindrome";
	}
	else
		cout<<"not a pallindrome";

	return 0;

}


