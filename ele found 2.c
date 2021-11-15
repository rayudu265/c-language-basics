#include<stdio.h>
void main()
{
	int i,n,arr[5],fe;
    scanf("%d",&fe);
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);	
	}
		for(i=0;i<5;i++)
		{
			if(arr[0]==fe)
			{
		      printf("element found : %d",fe);
		      break;
			}
			else if(arr[1]==fe)
			{
		      printf("element found : %d",fe);
		      break;
			}
	        else if(arr[2]==fe)
			{
		      printf("element found : %d",fe);
		      break;
			}
			 else if(arr[3]==fe)
			{
		      printf("element found : %d",fe);
		      break;
			}
			 else if(arr[4]==fe)
			{
		      printf("element found : %d",fe);
		      break;
			}
			 else
			{
		      printf("element  not found");
			}
		}
	
	
}
