#include <stdio.h>
#include <stdlib.h>
struct node
{
    int d;
    struct node *p;
};
struct node *start = NULL;
void add_node()
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    if (start == NULL)
    {
        start = temp;
        printf("\nNODE CREATED :");
        scanf("%d", &temp->d);
        temp->p = NULL;
    }
    else
    {
        struct node *next;
        next = start;
        printf("\nNODE CREATED :");
        scanf("%d", &temp->d);
        start = temp;
        temp->p = next;
    }
}
void surch()
{
    struct node *x;
    x = start;
    int c, y = 0, n = 0, z;
    if (x == NULL)
    {
        printf("\nLINK LIST EMPTY");
    }
    else
    {
        printf("ENTER THE DATA :");
        scanf("%d", &c);
        while (x != NULL)
        {
            n++;
            if (x->d == c)
            {
                y++;
                z = n;
            }
            x = x->p;
        }
        if (y == 0)
        {
            printf("DATA NOT FOUND");
        }
        else
        {
            printf("DATA FOUND IN %d NODE", z);
        }
    }
}
void print()
{
    struct node *v;
    v = start;
    if (v == NULL)
    {
        printf("\nLINK LIST EMPTY");
    }
    else
    {
        while (v != NULL)
        {
            printf("<-%d", v->d);
            v = v->p;
        }
    }
}
void bgn_remove()
{
    struct node *c, *d;
    c = start;
    if (c == NULL)
    {
        printf("NODE NOT EXIST CREATE ANOTHER");
    }
    printf("%d item is deleted", c->d);
    d = start->p;
    free(c);
    start = d;
}
void end_remove()
{
    struct node *x, *y;
    x = start;
    if (x == NULL)
    {
        printf("Link list Empty");
    }
    while (x->p != NULL)
    {
        y = x;
        x = x->p;
    }
    y->p = NULL;
    free(x);
}
int main()
{
    int ch;
    do
    {
        printf("\nEnter the choice :");
        scanf("%d", &ch);
        switch (ch)
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

        case 4:
            bgn_remove();
            break;

        case 5:
            end_remove();
            break;

        case 6:
            puts("Program exited...");
            exit(0);
        }

    } while (ch != 6);
    return 0;
}
//  printf("THIS CODE DEVELOPED BY SK MIRAJ");