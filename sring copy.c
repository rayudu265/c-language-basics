#include<stdio.h>
#include<string.h>
void main()
{
	char str[20],str1[20];
	int i;
	scanf("%[^\n]s",str);
	for(i=0;str[i]!='\0';i++)
	{
		str1[i]=str[i];
	}
	printf("%s",str1);
    
}
