#include<stdio.h>
enum week{sun,mon,tue,wed,thu,fri,sat};
int main()
{
	int i;
	for (i=sun;i<=sat;i++)
	{
		printf("%d",i);
	}
	return 0;
	
}