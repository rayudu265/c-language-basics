#include<stdio.h>
#include<string.h>
void main()
{
	char str[100],substr[10];
	int len,i=0,j,len1,s;
	gets(str);
	puts("enter sub string length: ");
	scanf("%d",&len);
	len1=strlen(str);
	s=len;
	while(i<len)
	{
		substr[i]=str[s];
		i++;
		s++;
	}
	str[s]!='\0';
	substr[i]='\0';
	printf("%s",substr);
}
