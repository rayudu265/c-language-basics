#include<stdio.h>
void main()
{
  int i,n,ar[100],pos,ele,j;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
  	scanf("%d",&ar[i]);
  }
  for(i=0;i<n;i++)
  {
  	printf("ar[%d]=%d\n",i,ar[i]);
  }
  for(i=0;i<n;i++)
  {
  	for(j=i+1;j<n;j++)
  	{
  	 if(ar[i]==ar[j])	
  	 {
  	  printf(" elements found = %d\n",ar[i]);
  	  i++;
	   }
	}
  }
}
