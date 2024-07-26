#include<stdio.h>
#include<stdlib.h>

struct queue{
    
    int data[100];
    int front,rear,size;
};
typedef struct queue Q;

void insert(Q *q)
{
    int x;
    if (((q->front==0) && (q->rear==q->size-1)) || (q->front==q->rear+1))
    {
        printf("queue is over flow \n");
        return;
    }
    printf("enter the value : ");
    scanf("%d",&x);
    if (q->rear==q->size-1)
    {
        q->rear=0;
    }
    else
    {
        q->rear++;
    }
    q->data[q->rear]=x;
    
    if (q->front==-1)
    {
        q->front=0;
    }
    printf("\nfront is : %d \nrear is : %d\n",q->front,q->rear);
}
int delete(Q *q)
{
    int x;
    if (q->front==-1 || q->rear==-1)
    {
        printf("queue is empty \n");
        return 0;
    }
    x=q->data[q->front];
    
    if (q->front == q->rear)
    {
        q->front=q->rear=-1;
    }
    else if (q->front==q->size-1 )
    {
        q->front=0;
    }
    else
    {
        q->front++;
    }
    printf("\nfront is : %d \nrear is : %d\n",q->front,q->rear);
    return x;
}
void display(Q *q)
{
    int i;
    if (q->front==-1 || q->rear==-1 )
    {
        printf("queue is empty \n");
        return;
    }
    else if (q->front > q->rear)
    {
        for (i=q->front ; i<=q->size-1; i++)
        {
            printf("%d , ",q->data[i]);
        }
        for (i=0 ; i<=q->rear ; i++)
        {
            printf("%d , ",q->data[i]);
        }
    }
    else
    {
        for (i=q->front ;i<=q->rear ; i++)
        {
            printf("%d  |  ",q->data[i]);
        }
    }
}

void main()
{
    Q q;
    q.size=5;
    q.front=q.rear=-1;
    int ch,x;
    while (1)
    {
        printf("\npress 1 for insert \npress 2 for deletion \npress 3 to display \npress 4 to exit \nenter your choice : ");
        scanf("%d",&ch);
    
        switch(ch)
        {
            case 1: 
                    insert(&q);
                    display(&q);
                    printf("\n");
                    break;
            case 2:
                    x=delete(&q);
                    printf("deleted value is : %d \n",x);
                    display(&q);
                    printf("\n");
                    break;
            case 3:
                    display(&  q);
                    printf("\n");
                    break;
            case 4: 
                    exit (0);
        }
    }
}