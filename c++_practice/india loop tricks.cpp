   #include<stdio.h>
int main()
{
	int i,j,n;
	char a[20]={"\0INDIA"};
	printf("Enter a range of loop :");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		for(j=1;j<i;j++)
		{
			printf("%c",a[j]);
		}
		printf("\n");
	}
	return 0;
}