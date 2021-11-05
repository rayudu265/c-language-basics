#include<stdio.h>
int fact();
void main()
{
	int res=0;
	res=fact();
	printf("%d",res);
}
int fact()
{
	int n,i=1,fc=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fc=fc*i;
	}
	return fc;
}
