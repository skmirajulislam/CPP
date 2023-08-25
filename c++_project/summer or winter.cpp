#include<stdio.h>
int main()
{
	int a;
	printf("ENTER THE CELCIUS:-");
	scanf("%d",&a);
	if(a>28)
	{
		printf("-: IT IS  SUMMER");
	}
	else if(a>20)
	{
		printf(" -: IT IS  MONSOON");
	}
	else 
	{
	    printf("-: IS IS WINTER");
    }
	return 0;
}