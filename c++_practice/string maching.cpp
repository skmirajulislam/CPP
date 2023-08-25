#include<stdio.h>
int main()
{
	int i;
	char a[1];
	for(i=0;i<1;i++)
	{
		printf("Enter a char :");
		scanf("%c\n",&a[i]);
	}
	if(a[0]=='m')
	{
		printf("This string is maching");
	}
	else
	{
		printf("This string is not maching");
	}
	return 0;
}