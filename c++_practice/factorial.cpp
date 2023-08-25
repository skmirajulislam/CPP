#include<stdio.h>
int main()
{
	int facto=1,i,n;
	printf("Enter");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		facto=facto*i;
	}
	printf("%d",facto);
	return 0;
}