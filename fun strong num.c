#include<stdio.h>
int strongnum(int);
int main()
{
	int i,n,res;
	scanf("%d",&n);
	res=strongnum(n);
	printf("%d",res);
}
int strongnum(int n)
{
	int i=1,fact=1,sum=0,r;
	while(n!=0)
	{
		r=n%10;
		i=1;
		fact=1;
		while(i<=r)
		{
			fact=fact*i;
			i++;
		}
	
		n=n/10;
		sum=sum+fact;
	}
		
		return sum;	
}
