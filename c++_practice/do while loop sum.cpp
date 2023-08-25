#include<stdio.h>
int main()
{
	double n,sum=0;
	printf("Stop this program enter 0 \n\n ");
	do
	{
		printf("Enter the number :");
		scanf("%lf",&n);
		sum=sum+n;
	}
	while(n!=0.0);
	printf("the sum :- %2lf",sum);
	return 0;
}