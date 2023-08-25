#include<stdio.h>
#define n 5
int main()
{
    int a[n],i,temp;
    printf("Enter the element of array :\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nThe Element of array is :\n");
    for(i=0;i<5;i++)
    {
        printf("%d = %d\n",i,a[i]);
    }
    printf("\nThe reverse of array is :\n");
    for(i=0;i<5;i++)
    {
        temp=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=temp;
    }
    for(i=0;i<5;i++)
    {
        printf("%d = %d\n",i,a[n-i-1]);
    }  
    return 0;
}