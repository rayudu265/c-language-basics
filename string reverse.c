#include<stdio.h>
#include<string.h>
void main()
{
	char str[20];
	scanf("%[^\n]s",str);
	strrev(str);
	printf("%s",str);
}
    
