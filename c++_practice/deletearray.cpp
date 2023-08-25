#include<stdio.h>
int main()
{
    int a[5],i,loc;
    printf("Enter the element of array :\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter the location of element :\n");
    scanf("%d",&loc);
    for(i=loc-1;i<5-1;i++)
    {
      a[i]=a[i+1];
    }
    printf("\nafter deletion array is :\n");
    for(i=0;i<5-1;i++)
    {
        printf("\n%d",a[i]);
    }
    return 0;
}