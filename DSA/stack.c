#include <stdio.h>
#include <stdlib.h>
#define max 5
int top = -1;
int rear = -1;
int front = -1; 
int stack[5];
int qeuie[5];
void push()
{
    int item;
    if (top == max - 1)
    {
        printf("Stack over flow");
    }
    else
    {
        printf("PUSH ELEMENT IN STACK :");
        scanf("%d", &item);
        stack[top] = item;
        top++;
    }
}
void pop()
{
    if (top == -1)
    {
        printf("stack empty");
    }
    else
    {
        printf("POP %d", stack[top]);
        top--;
    }
}
void display()
{
    int i;
    if (top >= 0)
    {
        printf("THE ELEMENTS OF STACK IS ");
        for (i=-1;i<=top;i++)
        {
            printf("%d\t", stack[i]);
        }
    }
    else
    {
        printf("Stack empty");
    }
}
void enqe()
{
    int item;
    if (rear == max - 1)
    {
        printf("qeuie over flow");
    }
    else
    {
    	if(front==-1)
    	{
    		front=0;
		}
        printf("PUSH ELEMENT IN QEUIE :");
        scanf("%d", &item);
        qeuie[rear] = item;
        rear++;
    }
}
void deqe()
{  
    if (front == -1)
    {
        printf("qeuie empty");
    }
    else
    {
    	if(front>rear)
    	{
    		front=rear=-1;
		}
        printf("DEQE %d", qeuie[front]);
        front++;
    }
}
void show()
{
    int i;
    if (rear >= 0)
    {
        printf("THE ELEMENTS OF QEUIE IS ");
        for (i=front;i<=rear;i++)
        {
            printf("%d\t", qeuie[i]);
        }
    }
    else
    {
        printf("Qeuie empty");
    }
}
void main()
{
    int ch;
    printf("\t========= STACK IMPLIMENTATION =========\n");
    printf("1 FOR PUSH\n2 FOR POP\n3 FOR DISPLAYING STACK");
	printf("\n4 FOR ENQE\n5 FOR DEQE\n6 FOR DISPAYING QUIE");
	printf("\n7 FOR EXIT");
    while(1)
    {
        printf("\n\nEnter the choice :");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            push();
            break;

        case 2:
            pop();
            break;

        case 3:
            display();
            break;
            
        case 4:
        	enqe();
        	break;
        	
        case 5:
        	deqe();
        	break;
        	
        case 6:
        	show();
        	break;

        case 7:
            exit(0);
            break;

        default:
            printf("Enter valid choice");
        }
    } 
}