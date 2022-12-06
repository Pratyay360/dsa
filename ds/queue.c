#include<stdio.h>
#include<stdlib.h>
#define max 5
int queue[max];
int front = -1;
int rear = -1;
void enqueue()
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
void dequeue()
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
        printf("\n1. Enqueue | 2. Dequeue | 3. Display | 4. Exit");
        printf("\nEnter a option : ");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        default:
            continue;
        }
    }
    return 0;
}