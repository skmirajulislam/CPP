#include<stdio.h>
int main()
{
    int a[5],b[5],c[10],i;
    printf("Enter the element of array :\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nElement of a[] is :\n");
    for(i=0;i<5;i++)
    {
        printf("%d\n",a[i]);
    }
    printf("\nEnter the element of array :\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&b[i]);
    }
    printf("\nElement of b[] is :\n");
    for(i=0;i<5;i++)
    {
        printf("%d\n",b[i]);
    }
    printf("\nThe marge of array is :\n");
    for(i=0;i<5;i++)
    {
        c[i]=a[i];
    }
    for(i=5;i<10;i++)
    {
        c[i]=b[i-5];
    }
    for(i=0;i<10;i++)
    {
        printf("%d\n",c[i]);
    }
    return 0;
}