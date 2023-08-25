#include<stdio.h>
#include<string.h>
int main()
{
	char m[100],n[100],l;
	printf("ENTER THE SRTING: ");
	scanf("%s",&m);
	strcpy(n,m);
	strrev(m);
	if(strcmp(m,n)==0)
	{
		printf("palindrome");
	}
	else
	{
		printf("not palindrome");
	}
	return 0;
}