#include<stdio.h>
int main()
{
	int L,b,side,c;
	scanf("%d%d%d%d",&L,&b,&side,&c);
	switch(c)
	{
		case 1:
		printf("area of square=%d",side*side);
		break;
		case 2:
		printf("area of rec=%d",L*b);
		break;	
	    case 3:
		printf("area of triangle=%d",0.5*L*b);
		break;	
		default: printf ("invalid");
    }

}
