#include<stdio.h>
int main()
{
	int costs[5],i,sum;
	int coin=7;
	int num[6];
	for(i=0;i<5;i++)
	{
		printf("Enter the %d ice cream price is ",i);
		scanf("%d",&costs[i]);
	}
	
	for(i=0;i<5;i++)
	{
		printf("\nin store %d ice cream price is %d\n",i,costs[i]);
	}
	
	if(coin>=costs[0])
	{
		printf("\n1 is purchaseble\n");
	    num[0]=1;
	}
	if(coin>=costs[1])
	{
		printf("2 is purchasable\n");
		num[1]=1;
	}
	if(coin>=costs[2])
	{
		printf("3 is purchaseble\n");
		num[2]=1;
	}
	if(coin>=costs[3])
	{
		printf("4 is purchaseble\n");
		num[3]=1;
	}
	if(coin>=costs[4])
 	{
		printf("5 is purchaseble\n");
		num[4]=1;
	}
	
	if(num[0]==1 || num[1]==1 || num[2]==1 || num[3]==1 || num[4]==1)
	{
		
		printf("\ntotal purtchase rate :-");
		for(i=0;i<5;i++)
	    {
		    printf("%d",num[i]);
	    }
	    sum=num[0]+num[1]+num[2]+num[3]+num[4];
	    printf("\n%d number of ice cream is purtechaseble",sum);
	}
	else
	{
		printf("icecream is not purchesed");
	}
	  
	return 0;
}

		