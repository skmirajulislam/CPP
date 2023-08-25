#include<stdio.h>
int  main()
{
    int a=5,j=4,*b,*c,*H;

    b=&a;
    printf("\n\nThe address of a is %p\n",&a);
    printf("The address of a is inside pointer %p\n",b);
    printf("value of a inside pointer %d\n",*b);
    printf("The address of pointer b %p\n\n",&b);

    c=NULL;
    printf("The address of c pointer %p\n",&c);
    printf("The NULL pointer inside addres is %p\n\n",c);

    H=&j;
    printf("The address of j is %p\n",&j);
    printf("The address of j is inside pointer %p\n",H);
    printf("The value of j inside pointer %d\n",*H);
    printf("The address of pointer H %p\n\n",&H);

    *H=2;      
    printf("%d",*H);

    return 0; 
}