#include<stdio.h>
int i,j,temp;
void print(int a[],int n)
{
    for(i=0;i<n;i++)
    {
        printf("%d,",a[i]);
    }
}
void bubble(int a[],int n)
{
    for (i=0;i<n;i++)
    {
       for (j=i+1;j<n;j++)
       {
        if (a[j]<a[i])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
        
       }
       
    }

}
int main()
{
    int i,j,n,temp; 
    int a[5]={10,55,12,2,26};
    n=sizeof(a)/sizeof(a[0]);
    printf("Before sorting :\n");
    print(a,n);
    bubble(a,n);
    printf("\n\nAfter sorting\n");
    print(a,n);
   
    return 0;
}