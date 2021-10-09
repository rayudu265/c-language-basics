#include<stdio.h>
int main()
{
	int a=2,b=6,c=8;
	printf("%d",a<b&&a<c);
	printf("%d",a<b||a<c);
	printf("%d",c<b&&a<b);
	printf("%d",c<b||a<b);
	printf("%d",!(a<b));
}
