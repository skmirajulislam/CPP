#include<stdio.h>
int main()
{
	char ch;
	printf("ENTER THE CHRACTOR:");
	scanf("%c",&ch);
	if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || 
	    ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
	{
		printf("-:THIS IS VOWEL CHRACTOR");
	}
	else
	{
		printf("-:THIS IS CONSONANTS CHRACTOR");
	}
	return 0;
}