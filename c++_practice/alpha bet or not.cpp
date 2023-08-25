#include<stdio.h>
int main()
{
	char c;
	printf("Enter the chracter:");  
	scanf("%c",&c);
	if((c>='a' && c<='z') || (c>='A' && c<='Z'))  
	{
		printf("THIS NUMBER is  alphabet");
	}
	else
	{
		printf("THIS NUMBER is not alphabet");
	}
	return 0;
	    
}       