#include<stdio.h>
int main()
{
    int a[50];
    int pos,i,temp,n;
    printf("Enter  how much element :");
    scanf("%d",&n);
    printf("\nEnter array element :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d,",&a[i]);
    }
    printf("\nEnter new value :");
    scanf("%d",&temp);
    printf("\nEnter the element position :");
    scanf("%d",&pos);
    for(i=n;i>pos-1;i--)
    {
        a[i]=a[i-1];
    }
    a[i]=temp;
    printf("The new array is :\n");
    for(i=0;i<n+1;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}