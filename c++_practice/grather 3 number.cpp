#include<stdio.h>
int main()
{
	int a,b,c;
	printf("ENTER THE FIRST NUMBER:-");
	scanf("%d",&a);
	printf("ENTER THE SECOND NUMBER:-");
	scanf("%d",&b);
	printf("ENTER THE THIRD NUMBER:-");
	scanf("%d",&c);
	if(a>b)
	{
		printf("Number1=%d is grather\n",a);
	}
	else if(b>c)
	{
		printf("Number2=%d is grather\n",b);
	}
	else
	{
		printf("Number3=%d is grather\n",c);
	}
	return 0;
}