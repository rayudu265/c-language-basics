#include<stdio.h>
void main()
{
	int ar[3][3],i,j,sum;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&ar[i][j]);
		}
	}
		for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			sum=sum+ar[i][j];
			printf("%d\t",ar[i][j]);
		}
		printf("\n %d",sum);
		
	}
	
}
