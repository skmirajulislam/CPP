#include<stdio.h>
int main()
{
	int a[4][4]={{96,88,68,45},{94,82,75,75},{65,52,53,85},{88,96,54,89}};
	
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
		    printf("the value of %d%d element of %d \n",i,j,a[i][j]);
     	}
     	printf("\n");
	}	
	return 0;
}

		