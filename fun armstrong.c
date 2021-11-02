#include<stdio.h>
int armstrong(int);
void main()
{
	int i,n,res;
	scanf("%d",&n);
	res=armstrong(n);
	printf("%d",res);
}
int armstrong(int n)
{
	int i=1,r,sum=0;
	while(n!=0)
	{
		r=n%10;
		sum=sum+(r*r*r);
		n=n/10;
	}
	return sum;
}
