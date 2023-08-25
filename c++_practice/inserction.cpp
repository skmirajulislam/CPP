#include <stdio.h>
#include <stdlib.h>
struct node 
{
    int d;
    struct node *p;
};
struct node *start=NULL;
void add_node()
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    if(start==NULL)
    {
        start=temp;
        printf("\nNODE CREATED :");
        scanf("%d",&temp->d);
        temp->p=NULL;
    }
    else
    {
        struct node *next;
        next=start;
        printf("\nNODE CREATED :");
        scanf("%d",&temp->d);
        start=temp;
        temp->p=next;
    }
}
void surch()
{
    struct node *x;
    x=start;
    int c,y=0;
    if (x==NULL)
    {
        printf("\nLINK LIST EMPTY");
    }
    else
    {
        printf("ENTER THE DATA :");
        scanf("%d",&c);
        while(x!=NULL)
        {
            if(x->d==c)
            {
                y++;
            }
            x=x->p;
        }
        if(y==0)
        {
            printf("DATA NOT FOUND");
        }
        else
        {
            printf("DATA FOUND");
        }
    }
}
void print()
{
    struct node *v;
    v=start;
    if (v==NULL)
    {
        printf("\nLINK LIST EMPTY");
    }
    else
    {
        while(v!=NULL)
        {
            printf("%d\t",v->d);
            v=v->p;
        }
    }

}
int main()
{
    int ch;
    do
    {
        printf("\nEnter the choice :");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            add_node();
            break;

            case 2:
            print();
            break;

            case 3:
            surch();
            break;
        }

    }while(ch!=3);
    return 0;
}
//  printf("THIS CODE DEVELOPED BY SK MIRAJ");