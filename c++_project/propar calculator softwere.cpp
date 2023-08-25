#include<stdio.h>
int main()
{
	int a,b,sum,div,mul,sub;
	printf("ENTER THE FIRST NUMBER IS :");
	scanf("%d",&a);
	printf("ENTER THE SECOND NUMBER IS :");
	scanf("%d",&b);
	sum=a+b;
	div=a/b;
	mul=a*b;
	sub=a-b;
	printf("\nTHE SUM OF TWO NUMBER IS :%d",sum);
	printf("\nTHE DIV OF TWO NUMBER IS :%d",div);	
	printf("\nTHE MUL OF TWO NUMBER IS :%d",mul);
	printf("\nTHE SUB OF TWO NUMBER IS :%d",sub);
	return 0;
}
