#include<stdio.h>
int main()
{
	int a,b,c,total;
	scanf("%d%d%d",&a,&b,&c);
	total=big (a,b,c);
	printf("%d is biggest number",total);
}
 int big(int a,int b,int c)
 {
 	if(a<b)
 	{
 		return b;
	}
	else if (b<a)
	{
		return a;
	}
	else
	{
		return c;
	}
 }
