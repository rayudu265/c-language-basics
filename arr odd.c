#include<stdio.h>
void main()
{
	int i,n,arr[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
	   if(arr[i]%2!=0)
	   {
	   	printf("%d\n",arr[i]);
	   }
	}
}
