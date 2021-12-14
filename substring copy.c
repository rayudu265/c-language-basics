#include<stdio.h>
#include<string.h>
void main()
{
	char str[100],substr[10];
	int len,i=0;
	gets(str);
	puts("enter sub string length: ");
	scanf("%d",&len);
	while(i<len)
	{
		substr[i]=str[i];
		i++;
	}
	substr[i]='\0';
	printf("%s",substr);
}
