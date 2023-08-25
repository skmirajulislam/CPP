#include<stdio.h>
#include<stdlib.h>
int main() 
{
	int year;
	printf("ENTER THE YEAR :");
	scanf("%d",&year);
	if(year==1900||year==1700||year==1800)
	{
	    printf("NOT LIPYEAR");
	    exit(0);
    }
	if(year%400==0)
	{
		printf("IT IS LIPYEAR");
	} 
	else if(year%100==0) 
	{
		printf("IT IS LIPYEAR");
	} 
	else if(year%4==0) 
	{
		printf("IT IS LIPYEAR");
	}
	else
	{
		printf("IT IS NOT LIPYEAR");
	}
    return 0;
}