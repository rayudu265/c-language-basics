#include<stdio.h>
int isprime(int);
int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		if (isprime(i))
		{
			printf("%d\n",i);
		}
	}
}
int isprime(int m)
{
  int i;
  for(i=2;i<m;i++)
  {
  	if(m%i==0)
  	{
  		return 0;
	  }
  }
  return 1;
 	
 
 
}

