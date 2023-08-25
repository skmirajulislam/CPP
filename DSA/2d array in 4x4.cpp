#include<stdio.h>
int main()
{
	int a[4][4]={{12,21,24,15},{24,34,3,5},{22,36,68,94},{28,64,100,55}};
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			printf("The location of element %d%d the value of element %d \n",i,j,a[i][j]);
		}
	}
	return 0;
}