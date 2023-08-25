#include <stdio.h>
#include <stdlib.h>
#define m 5
int stack[100];
int top = -1;
int item;
void push()
{
    if (top == m - 1)
    {
        printf("Stack overflow..");
    }
    else
    {
        printf("Enter the item :");
        scanf("%d", &item);
        top++;
        stack[top] = item;
    }
}
void pop()
{
    if (top == -1)
    {
        printf("Stack empty");
    }
    else
    {
        printf("poped %d", stack[top]);
        top--;
    }
}
void show()
{
    int i;
    if (top == -1)
    {
        printf("Stack empty");
    }
    else
    {
        for (i = top; i >= 0; i--)
        {
            printf("%d\n", stack[i]);
        }
    }
}
int main()
{
    int n;
    printf("\t========STACK=======");
    printf("\n1 for push\n2 for pop\n3 for show\n4 for exit");
    while (n != 0)
    {
        printf("\nEnter the choice :");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            push();
            break;

        case 2:
            pop();
            break;

        case 3:
            show();
            break;

        case 4:
            exit(0);
            break;


        default:
            printf("Enter valid choice...");
        }
    }
    return 0;
}