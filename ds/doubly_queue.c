#include<stdio.h>
#include<stdlib.h>
#define max 5
int queue[max];
int front = -1;
int rear = -1;
void insert_front()
{
    if(front==0)
    {
        printf("Queue is full");
    }
    else
    {
        int item;
        printf("Enter a item : ");
        scanf("%d", &item);
        if((front==-1)&&(rear==-1))
        {
            front=0;
            rear=0;
        }
        
        else
        {
            front--;
        }
        queue[front] = item;
    }
}
void insert_rear()
{
    if(rear==max-1)
    {
        printf("Queue is full");
    }
    else
    {
        int item;
        printf("Enter a item : ");
        scanf("%d", &item);
        if((front==-1)&&(rear==-1))
        {
            front=0;
            rear=0;
        }
        else
        {
            rear++;
        }
        queue[rear] = item;
    }
}
void delete_front()
{
    if((front==-1)&&(rear==-1))
    {
        printf("Queue is empty");
    }
    else
    {
        printf("Dequeue : %d", queue[front]);
        if(front==rear)
        {
            front=-1;
            rear=-1;
        }
        else
        {
            front++;
        }
    }
}
void delete_rear()
{
    if((front==-1)&&(rear==-1))
    {
        printf("Queue is empty");
    }
    else
    {
        printf("Dequeue : %d", queue[rear]);
        if(front==rear)
        {
            front=-1;
            rear=-1;
        }
        else
        {
            rear--;
        }
    }
}
void display()
{
    if((front==-1)&&(rear==-1))
    {
        printf("Queue is empty");
    }
    else
    {
        int i;
        for(i=front;i<=rear;i++)
        {
            printf("[%d]\n", queue[i]);
        }
    }
}
int main()
{
    int n;
    while(1)
    {
        printf("\n1. insert front | 2. insert rear | 3. delete front | 4. delete rear |5. Display | 6. Exit");
        printf("\nEnter a option : ");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            insert_front();
            break;
        case 2:
            insert_rear();
            break;
        case 3:
            delete_front();
            break;
        case 4:
            delete_rear();
            break;
        case 5:
            display();
            break;
        case 6:
            exit(0);
            break;
        default:
            continue;
        }
    }
    return 0;
}