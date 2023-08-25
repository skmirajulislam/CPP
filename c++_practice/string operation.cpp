#include<stdio.h>
#include<string.h>
int main()
{
	char a[20]={"Miraj"};
	int i;
	printf("%c",a[0]);
	printf("\n%s",a);
	printf("\n%d\n",strlen(a));
	for(i=0;i<5;i++)
	{
		printf("\n%d-%c\n",i,a[i]);
	}
	printf("\n%s\n",strrev(a));
	for(i=0;i<5;i++)
	{
		printf("\n%d-%c\n",i,a[i]);
	}
	
	return 0;
}