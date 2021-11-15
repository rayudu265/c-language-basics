#include<stdio.h>
void main()
{
  int i,n,ar[100],pos,ele;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
  	scanf("%d",&ar[i]);
  }
  for(i=0;i<n;i++)
  {
  	printf("ar[%d]=%d\n",i,ar[i]);
  }
  printf("enter the position : ");
  scanf("%d",&pos);
  printf(" enter element : ");
  scanf("%d",&ele);
  for(i=n-1;i>=pos;i--)
  {
  	ar[i+1]=ar[i];
  }
  ar[pos]=ele;
  n++;
  for(i=0;i<n;i++)
  {
  	printf("ar[%d]=%d\n",i,ar[i]);
  }
}
