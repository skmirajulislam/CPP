#include<stdio.h>
int i,j,t;
int asending(int b[])
{
    for ( i = 0; i < 5; i++)
    {
        for ( j = i+1; j < 5; j++)
        {
            if (b[i]>b[j])
            {
                t=b[i];
                b[i]=b[j];
                b[j]=t;
            }
            
        }
    }
    for ( i = 0; i < 5; i++)
    {
       printf("%d");
    }
}
int main()
{
    int b[5]={1,10,6,2,9};
    asending(b);
    return 0;
}
  

    
