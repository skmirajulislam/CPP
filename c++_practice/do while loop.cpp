#include<stdio.h>
int main()
{
	int i,n,sum=0;
	float avg;
	printf("\n Enter the value of n :-");
	scanf("%d",&n); 
	do
	{
		sum=sum+i;
		i++;
	}
	while(i<=n);
	avg = sum/n;
	printf("\n The sum of first %d number :- %d",n,sum);
	printf("\n The average of first %d num :- %.2f",n,avg);
	return 0;
}