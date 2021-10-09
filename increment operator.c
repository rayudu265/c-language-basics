#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d",&a);
	b=++a;
	printf("a=%d\nb=%d",a,b);//a=11,b=11
	b=a++;
	printf("\na=%d\nb=%d",a,b);
}

