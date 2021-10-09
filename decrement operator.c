#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d",&a);
	b=--a;
	printf("a=%d\nb=%d",a,b);//a=,b=
	b=a--;
	printf("\na=%d\nb=%d",a,b);
}
