#include<stdio.h>
int revnum(int);
int main()
{
	int n,i,r,res;
	scanf("%d",&n);
	res=revnum(n);
	printf("%d",res);

}
 int revnum(int n)
 {
 	int i=1,r,sum=0;
 	while(n!=0)
 	{
 	    r=n%10;
    	sum=sum*10+r;
    	n=n/10;	
	 }
	 return sum ;
 }
