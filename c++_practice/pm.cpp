#include<stdio.h>
int main()
{
	int a,b,i,g=0;
	printf("Enter the first num :");
	scanf("%d",&a);
	if(a==0||a==1)
	{
		g=1;
	}
	for(i=2;i<a/2;i++)
	{
		if(a%i==0)
		{
			g=1;
			break;
	    }
	}
	if(g==0)
	{
		printf("prime");
	}
	else
	{
		printf("not prime");
	}
	return 0;
}