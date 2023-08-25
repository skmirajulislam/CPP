#include<stdio.h>
int i;
void roll_02()
{
	for(i=1;i<5;i++)
	{
		printf("%c",i);
	}
}
void roll_two()
{
	for(i=4;i>0;i--)
	{
		printf("%c",i);
	}	
	
}
int main()
{
    roll_02();
	printf("\n");
	roll_two();
	return 0;
}