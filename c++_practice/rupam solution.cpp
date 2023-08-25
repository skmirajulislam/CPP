#include<stdio.h>
int main()      
{
	char arr[20]={"INDIA"};
	int i,j;
	for(i=0;i<=5-1;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%c",arr[j]);
		}
		printf("\n");
	}
    return 0;	
}