#include<stdio.h>
void add()
{
	int a=0,b=1,c,n,i;
	printf("ENter a renge :");
	scanf("%d",&n);
	for(i=0;i<=n;i++)	
	{
		printf("%d,",a);
		c=a+b;
		a=b;
		b=c;
	}
}
int main()
{
	add();
	return 0;
}