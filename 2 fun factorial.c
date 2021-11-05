#include<stdio.h>
factorial(int);
void main()
{
	int n,i;
	scanf("%d",&n);
	factorial(n);
}
factorial(int n)
{
	int fc=1,i;
	for (i=1;i<=n;i++)
	{
		fc=fc*i;
	}
	printf("%d",fc);
}

