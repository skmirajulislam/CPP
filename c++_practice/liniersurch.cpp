#include<stdio.h>
int main()
{
    int a[100],i,n,cpy;
    printf("Enter the range of array :");
    scanf("%d",&n);
    printf("\nENTER ARRAY ELEMENT:-\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("ARRAY ELEMENTS ARE :-\n");
    for ( i = 0; i < n; i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\nENTER THE ELEMENTS WHICH YOU SURCH : ");
    scanf("%d",&cpy);
    for(i=0;i<n;i++)
    {
        if(a[i]==cpy)
        {
            printf("ELEMENTS FOUND IN INDEX %d",i);
        }
    }
    return 0;
}