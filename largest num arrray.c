#include<stdio.h>
void main()
{
	int i,n,arr[100],large;
	scanf("%d",&n);
	{
		for(i=0;i<n;i++)
		{
			scanf("%d",&arr[i]);	
		}
		large=arr[0];
		for(i=0;i<n;i++)
		{
			if(large<arr[i])
			{
			  large=arr[i];
			}
		}
		printf("%d",large);
	}
}
