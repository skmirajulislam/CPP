#include<stdio.h>
int main()
{
    int a[10],i;
    printf("Enter the elements :");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        printf("%d=%d\n",i,a[i]);
    }
    return 0;
}