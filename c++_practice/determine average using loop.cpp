#include<stdio.h>
int main()
{
	int i,n,sum=0,numbers;
	float Average;
	
	printf("\n Please enter how many number you want? \n");
	scanf("%d",&n);
	
	printf("\n Please enter the elements one by one \n");
	for(i=0;i<n;++i)
	{
		scanf("%d",&numbers);
		sum = sum +numbers;
	}
	
	Average = sum/n;
	
	printf("\n Sum of the %d numbers =%d",n,sum);
    printf("\n Average of the %d numbers = %.2f",n,Average);
    
    return 0;
}