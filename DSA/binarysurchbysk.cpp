#include<stdio.h>
int main()
{
    int a[100],i,n,x,l,h,m;
    printf("Enter the range :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    l=0;
    h=n-1;
    m=(l+h)/2;
    printf("Enter the surch element :");
    scanf("%d",&x);
    while (l<=h)
    {
        if(a[m]<x)
        {
            l=m+1;
        }
        if(a[m]==x)
        {
            printf("Element found in index %d",m);
            break;
        }
        if(a[m]>x)
        {
            h=m-1;
        }
        m=(l+h)/2;
    }
    return 0;
}