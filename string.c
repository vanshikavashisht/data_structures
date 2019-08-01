#include<stdio.h>
#include<string.h>
int main()
{
char s[100],s1[100];
gets(s);
gets(s1);
char temp[100];
strcpy(temp,s);
strcpy(s,s1);
strcpy(s1,temp);
printf("%s%s",s,s1);
}
