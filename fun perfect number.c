#include<stdio.h>
int pernum(int);
int main()
{
	int n,i,r,res;
	scanf("%d",&n);
	res=pernum(n);
//	printf("%d",res);
	if(n==res)
	{
		printf("perfect number");
	}
	else 
	{
		printf("not perfect number");
	}
}
int pernum(int n)
{
	int i=1,count=0;
	for(i=1;i<n;i++);
	{
	  if (n%i==0)
	  {
	  	count=count+i;
	  }
	}
	return count;
}
