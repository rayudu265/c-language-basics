#include<stdio.h>
void main()
{
	int i,n,arr[100],small,pos;
	scanf("%d",&n);
	{
		for(i=0;i<n;i++)
		{
			scanf("%d",&arr[i]);	
		}
		small=arr[0];
		for(i=0;i<n;i++)
		{
			if(small>arr[i])
			{
			  small=arr[i];
			  pos=i;
			}
		}
		printf("%d\n%d",small,pos);
	}
}
