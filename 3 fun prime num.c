#include<stdio.h>
int prime();
void main()
{
	int res=0;
	res=prime();
    //printf("%d",res);
    if(res==1)
    {
    	printf("prime");
	}
	else
	{
		printf("not prime");
	}
}
int prime()
{
	int n,i;
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
	  if (n%i==0)
	  {
	    return 0;
	  }
	}
	return 1;
}
