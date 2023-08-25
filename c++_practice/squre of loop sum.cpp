#include<stdio.h>
int main()
{
	int i,sum=0,squre;
	for(i=1;i<=10;i++)
	{
		sum=sum+i;
	}
	for(i=1;i<=10;i++)
	{
		squre=sum*sum;
	}
	printf("THE SUM OF ALL NUMBER IS %d\n",sum);
	printf("THE SQURE OF SUM IS %d",squre);
}