#include<stdio.h>
int main()
{
	int a,b,i,lcm,gcd;
	printf("Enter the first num :");
	scanf("%d",&a);
	printf("Enter sccond number :");
	scanf("%d",&b);
	for(i=1;i<a&&b;i++)
	{
		if(a%i==0 && b%i==0)
		{
			gcd=i;
	    }
	}
	lcm=(a*b)/gcd;
	printf("\nGCD is %d",gcd);
	printf("\nLCM is %d",lcm);
	return 0;
}