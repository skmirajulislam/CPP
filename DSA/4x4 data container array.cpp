#include<stdio.h>
int main()
{
	int a[4][4]; /*array base declearing array is 2d and base 4x4 */
	for(int i=0;i<4;i++)/*Start looping for continuasly get of print result; rows only*/
	{
	  for(int j=0;j<4;j++)/*start next loop for column declearing*/
	  {
		printf("Enter the value of location %d%d element of array :-",i,j);/*get element value form user*/
		scanf("%d",&a[i][j]);/*declearing element variable or array */
	  }
	  printf("\n");/*for structure and grouping of value*/
	}
    for(int i=0;i<4;i++)/*start loop for displaying result*/
	{
	  for(int j=0;j<4;j++)
	  {
		printf("The value of location %d%d element is %d\n",i,j,a[i][j]);/*display the element location and his value*/
	  }
	   printf("\n");/*for structure and grouping of value*/
    }
	return 0;/*this code is made by skmiraj thanks for watching*/
}