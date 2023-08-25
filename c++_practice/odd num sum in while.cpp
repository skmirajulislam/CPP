#include<stdio.h>
int main()
{
	int i,sum=0;
	for(i=20;i<=40;i++)
	{
		if(i%2!=0)
		{
			printf("%d\n",i);
			sum=sum+i;
		}
	}
	printf("The ssum of all odd num:-%d",sum);
	return 0;
}