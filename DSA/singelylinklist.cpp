#include <stdio.h>
#include <stdlib.h>
struct node 
{
    int d;
    struct node *p;
};
struct node *s=NULL;
void addnode()
{
    struct node *temp,*next; 
    if (s==NULL)
    {
        temp=(struct node*)malloc(sizeof(struct node));
        s=temp;
        printf("ENTER NODE DATA :");
        scanf("%d",&temp->d);
        temp->p=NULL;
    }
    else
    {
        temp=(struct node*)malloc(sizeof(struct node));
        next=s;
        while (next->p!=NULL)
        {
            next=next->p;
        }
        s=temp->p;
        scanf("%d",&temp->d);
        temp->p=next;
    }
}
void print()
{
    if (s==NULL)
    {
        printf("link lis empty");
    }
    else
    {
        while(s !=NULL)
        {
            printf("data is : %d\n",s->d);
            s=s->p;
        }
    }
   
}
int main()
{
    int ch;
    while (ch!=0)
    {
        printf("\nENTER 1 FOR NEW NODE :");
        scanf("%d",&ch);
        switch (ch)
        {
            case 1:
               addnode();
               break;

            case 2:
               print();
               break;

            default :
                printf("Enter valid choice between 1 or 2");
        }
    }
    return 0;
}