#include <stdio.h>
#include <stdlib.h>
#define max 5
int stack[5];
int que[5];
int top = -1;
int rear = -1;
int front = -1;
int data;
void pop();
void dqueie();
void display_tree(struct root*n);
void push()
{
    static int cz = 0;
    if (top == max - 1)
    {
        ++cz;
        printf("\nStack is full %d time worn\a ", cz);
        if (cz > 3)
        {
            puts("Start poping");
            pop();
        }
    }
    else
    {
        printf("Enter the data : ");
        scanf("%d", &data);
        ++top;
        stack[top] = data;
    }
}
void pop()
{
    static int cx = 0;
    if (top == -1)
    {
        ++cx;
        printf("\nstack is empty %d time worn\a\n", cx);
        if (cx > 3)
        {
            puts("Start pushing");
            push();
        }
    }
    else
    {

        printf("%d is pop", stack[top]);
        --top;
    }
}
void show()
{
    int i;
    if (top == -1)
    {
        printf("\nStack is empty\a");
    }
    else
    {
        printf("INDEX == DATA == [%d] => top", top);
        for (i = top; i >= 0; i--)
        {
            printf("\nI[%d] - %d", i, stack[i]);
        }
    }
}
void enque()
{
    static int qx = 0;
    if (rear == max - 1)
    {
        ++qx;
        printf("\nqueuie is full %d time worn", qx);
        if (qx == 3)
        {
            puts("\nStart deleting");
            dqueie();
        }
    }
    else
    {
        printf("Enter the data  : ");
        scanf("%d", &data);
        ++rear;
        que[rear] = data;
    }
}
void dqueie()
{
    static int qz = 0;
    if (rear == -1 || front == max - 1)
    {
        ++qz;
        printf("\nqueuie is Empty %d time worn", qz);
        if (qz == 3)
        {
            puts("\nStart inserting");
            enque();
        }
    }
    else
    {
        ++front;
        printf("\n%d is removed", que[front]);
    }
}
void display_que()
{
    int i;
    if (rear == -1)
    {
        printf("\nData is not exist");
    }
    else
    {
        printf("INDEX == DATA == [%d] -> rear | [%d] -> front\n", rear, front);
        for (i = rear; i >= front + 1; --i)
        {
            printf("\nQ[%d] == %d", i, que[i]);
        }
    }
}
struct node
{
    int d;
    struct node *p;
};
struct node *s = NULL;
void insert()
{
    struct node *temp, *next;
    temp = (struct node *)malloc(sizeof(struct node));
    if (s == NULL)
    {
        s = temp;
        printf("\nFirst node created :");
        scanf("%d", &temp->d);
        temp->p = NULL;
    }
    else
    {
        next = s;
        printf("\nEnter the data :");
        scanf("%d", &temp->d);
        s = temp;
        temp->p = next;
    }
}
void delete_list()
{
    struct node *v, *cu;
    v = s;
    if (v == NULL)
    {
        printf("\nLINL LIST EMPTY");
    }
    else
    {
        printf("%d is deleted\n", v->d);
        cu = v->p;
        free(v);
        s = cu;
    }
}
void display_list()
{
    struct node *v;
    v = s;
    if (v == NULL)
    {
        printf("\nLink list empty");
    }
    else
    {
        while (v != NULL)
        {
            printf("->%d", v->d);
            v = v->p;
        }
    }
}
void search_list()
{
    struct node *v = s;
    int a = 0, x = 0, z, L;
    if (v == NULL)
    {
        printf("\nNO SEARCH POSSIBLE..!");
    }
    else
    {
        printf("\nEnter the search elements :");
        scanf("%d", &L);
        while (v != NULL)
        {
            if (v->d == L)
            {
                ++x;
                z = a;
            }
            ++a;
        }
        if (x == 1)
        {
            printf("Data is not exist");
        }
        else
        {
            printf("%d found in %d node", L, z);
        }
    }
}
void stack_ds()
{
    int op;
    puts("\n1 FOR PUSH\n2 FOR POP\n3 FOR DISPLAY\n0 FOR EXIT");
    do
    {
        printf("\nEnter the operation -> ");
        scanf("%d", &op);
        switch (op)
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

        default:
            printf("Operation not valid \nIf you entered 0 Exiting..!!!");
            break;
        }
    } while (op != 0);
}

void queuie_ds()
{
    int oq;
    puts("\n1 FOR ENQUEUIE\n2 FOR DEQUEUIE\n3 FOR DISPLAY\n0 FOR EXIT");
    do
    {
        printf("\nEnter the operation -> ");
        scanf("%d", &oq);
        switch (oq)
        {
        case 1:
            enque();
            break;

        case 2:
            dqueie();
            break;

        case 3:
            display_que();
            break;

        default:
            printf("Operation not valid \nIf you entered 0 Exiting....!");
            break;
        }

    } while (oq != 0);
}

void linklist_ds()
{
    int oq;
    puts("\n1 FOR  INSERT\n2 FOR DELETE\n3 FOR DISPLAY\n4 FOR SEARCH\n0 FOR EXIT");
    do
    {
        printf("\nEnter the operation -> ");
        scanf("%d", &oq);
        switch (oq)
        {

        case 1:
            insert();
            break;

        case 2:
            delete_list();
            break;

        case 3:
            display_list();
            break;

        case 4:
            search_list();
            break;

        default:
            printf("Operation not valid \nIf you entered 0 Exiting....!");
            break;
        }

    } while (oq != 0);
}

struct root
{
    struct root *l;
    int d;
    struct root *r;
};
struct root *insert(int data)
{
   struct root *tmp=(struct root*)malloc(sizeof(struct root));
   tmp->d=data;
   tmp->l=NULL;
   tmp->r=NULL;
   return tmp;
}
void insert_node()
{
    struct root *xv=NULL;
    static int tr=-1;
    int ex;
    do
    {
        printf("Enter the data :");
        scanf("%d",&ex);
        if(tr==-1)
        {
            xv=insert(ex);
            ++tr;
        }
        else if(tr==0)
        {
            xv->l=insert(ex);
            ++tr;
        }
        else if(tr==1)
        {
            xv->r=insert(ex);
            ++tr;
        }
        else if(tr==2)
        {
            xv->l->l=insert(ex);
            ++tr;
        }
        else if(tr==3)
        {
            xv->r->r=insert(ex);
            ++tr;
        }
        else if(tr==4)
        {
            xv->l->r=insert(ex);
            ++tr;
        }
        else if(tr==5)
        {
            xv->r->l=insert(ex);
            ++tr;
        }    
    } while (tr!=6);
    display_tree(xv);
}
void inorder_traversal(struct root *x)
{
    if(x==NULL)
    {
        return;
    }
    inorder_traversal(x->l);
    printf("->%d",x->d);
    inorder_traversal(x->r);
}
void pre_traversal(struct root *x)
{
    if(x==NULL)
    {
        return;
    }
  
    printf("->%d",x->d);  
    pre_traversal(x->l);
    pre_traversal(x->r);
}
void post_traversal(struct root *x)
{
    if(x==NULL)
    {
        return;
    }
    post_traversal(x->l); 
    post_traversal(x->r);
    printf("->%d",x->d);
}
void display_tree(struct root*n)
{
    int chx;
    puts("1 FOR INORDER\n2 FOR POSTORDER\n3 FOR PREORDER\n0 FOR EXIT");
    do
    {
        printf("\nENTER TRAVERSAL MODE -> ");
        scanf("%d",&chx);
        switch (chx)
        {
        case 1:
            inorder_traversal(n);
            break;

        case 2:
            post_traversal(n);
            break;

        case 3:
            pre_traversal(n);
            break;
        
        default:
            printf("\nEnter the valid op 0 for exit");
            break;
        }
    } while (chx!=0);
    
}
void tree_ds()
{
    int oq;
    do
    {
        puts("\n1 FOR INSERT ROOT AND DISPLAY\n2 FOR DELETE ROOT\n4 FOR SEARCH ROOT\n0 FOR EXIT");
        printf("\nEnter the operation -> ");
        scanf("%d", &oq);
        switch (oq)
        {

        case 1:
            insert_node();
            break;

        case 2:
            //delete_node();
            break;

        case 3:
            //search_tree();
            break;

        default:
            printf("Operation not valid \nIf you entered 0 Exiting....!");
            break;
        }

    } while (oq != 0);
}

int main()
{
    int ch;
    do
    {
    	puts("1 FOR STACK\n2 FOR QUEUIE\n3 FOR LINKLIST\n4 FOR TREE\n5 FOR ARRAY\n0 FOR EXIT\n");
        printf("\nEnter Data structure in choice -> ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            stack_ds();
            break;

        case 2:
            queuie_ds();
            break;

        case 3:
            linklist_ds();
            break;
        
        case 4:
           tree_ds();
           break;

        case 0:
            exit(0);
            break;

        default:
            printf("\n\aAlearts Data structure not found...!\a\n");
            break;
        }

    } while (ch != 0);
    return 0;
}
/*52 model by sk miraj */