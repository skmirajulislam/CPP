#include<stdio.h>
int main()
{
	int a,b;
	printf("ENTER THE FIRST NUMBER:-");
	scanf("%d",&a);
	printf("ENTER THE SECOND NUMBER:-");
	scanf("%d",&b);
	if(a>b)
	{
		printf("a is grthr than b");
	}
	else if(a<b)
	{
		printf("a is smaller than b");
	}
	else
	{
		printf("a is equal b");
	}
	return 0;
}