#include<stdio.h>
int main()
{
	int a[2][4]={{45,25,35,67},{22,34,48,100}};     
	for(int i=0;i<2;i++)
	{
	   for(int j=0;j<4;j++)
	{
		printf("The value of %d,%d element of array %d \n",i,j,a[i][j]);
	}
	    printf("\n");
    }
    return 0;
}  