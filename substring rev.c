#include<stdio.h>
#include<string.h>
void main()
{
	char str[100],substr[10];
	int len,i=0,j,len1;
	gets(str);
	puts("enter sub string length: ");
	scanf("%d",&len);
	len1=strlen(str);
	j=len1-len;
	while(i<len)
	{
		substr[i]=str[j];
		i++;
		j++;
	}
	str[j]!='\0';
	substr[i]='\0';
	printf("%s",substr);
}
