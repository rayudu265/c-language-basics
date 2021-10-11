#include<stdio.h>
int main()
{
	int telugu,english,hindi,maths,science,social,total;
	float per;
    scanf("%d%d%d%d%d%d",&telugu,&english,&hindi,&maths,&science,&social);
    total=telugu+english+hindi+maths+science+social;
	per= (total/600)*100;
    printf("%f",per);
    if(per>90)
    {
    	printf("grade A");
	}
	else if (per>=80 && per<=90)
	{
		printf("grade B");
	}
	else if (per>=70 && per<=80)
	{
		printf("grade C");
	}
	else if (per>=60 && per<=70)
	{
		printf("grade D");
	}
	else if (per>=50 && per<=60)
	{
		printf("grade E");
	}
	else 
	{
		printf("FAIL");
	}
	
	
	
}
