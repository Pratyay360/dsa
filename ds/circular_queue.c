#include <stdio.h>
#include <stdlib.h>
#define max 5
int queue[max];
int front = -1;
int rear = -1;
void enqueue()
{
    if ((rear + 1) % max == front)
    {
        printf("Queue is full");
    }
    else
    {
        int item;
        printf("Enter a item : ");
        scanf("%d", &item);
        if ((front == -1) && (rear == -1))
        {
            front = 0;
            rear = 0;
        }
        else
        {
            rear = (rear + 1) % max;
        }
        queue[rear] = item;
    }
}
void dequeue()
{
    if ((front == -1) && (rear == -1))
    {
        printf("Queue is empty");
    }
    else
    {
        printf("Dequeue : %d", queue[front]);
        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            front = (front + 1) % max;
        }
    }
}
void display()
{
    if ((front == -1) && (rear == -1))
    {
        printf("Queue is empty");
    }
    else
    {
        int i;
        if (front <= rear)
        {
            for (i = front; i <= rear; i++)
            {
                printf("[%d]\n", queue[i]);
            }
        }
        else
        {
            for (i = front; i < max; i++)
            {
                printf("[%d]\n", queue[i]);
            }
            for (i = 0; i <= rear; i++)
            {
                printf("[%d]\n", queue[i]);
            }
        }
    }
}
int main()
{
    int n;
    while (1)
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