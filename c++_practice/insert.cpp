#include<stdio.h>
int main()
{
    int a[100],i,pos,n,num;
    
    printf("Enter the range :");
    scanf("%d",&n);
    printf("Enter the elements :\n");
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    //inserting
	printf("\nEnter the location of element :\n");
    scanf("%d",&pos);
    for(i=pos-1;i<n-1;i++)
    {
      a[i]=a[i+1];
    }
	puts("After delete :\n");
    for(i=0;i<n-1;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}