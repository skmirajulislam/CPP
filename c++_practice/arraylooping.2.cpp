#include<stdio.h>
int main()
{
	int a[4];
	for(int i=0;i<4;i++)
	{
		printf("Enter the value of %d element of array \n",i);
		scanf("%d",&a[i]);
	}
	for(int i=0;i<4;i++)
	{
		printf("The value of %d element of %d \n",i,a[i]);
	}
	return 0;
}  