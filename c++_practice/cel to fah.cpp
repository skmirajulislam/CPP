#include<stdio.h>
int main()
{
	float c,fh;
	printf("Enter temparature in cel\n");
	scanf("%f",&c);
	fh=(c*9/5)+32;
	printf("Temparature in fahrenheit is %f\n",fh);
	return 0;
}