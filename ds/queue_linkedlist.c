#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *pre;
}*front, *rear, *temp, *temp2;
void insert_list()
{
    int item;
    if((rear==NULL)&&(front==NULL))
    {
        rear = (struct node*)malloc(sizeof(struct node));
        printf("Enter a item : ");
        scanf("%d", &rear->data);
        rear->next = NULL;
        rear->pre = NULL;
        front = rear;
    }
    else
    {
        temp = (struct node*)malloc(sizeof(struct node));
        printf("Enter a item : ");
        scanf("%d", &temp->data);
        rear->next = temp;
        temp->pre = front;
        rear= rear->next;
        temp->next = NULL;
        temp=NULL;
    }
}
void delete_list()
{
    if((rear==NULL)&&(front==NULL))
    {
        printf("List is empty");
    }
    else
    {
        temp = front;
        if(front==rear)
        {
            front = NULL;
            rear = NULL;
        }
        else
        {
            front = front->next;
            front->pre = NULL;
            temp->next = NULL;
        }
        printf("Deleted item is %d", temp->data);
        free(temp2);
    }
}
void display()
{
    if((rear==NULL)&&(front==NULL))
    {
        printf("List is empty");
    }
    else
    {
        temp = front;
        while(temp!=NULL)
        {
            printf("[%d]->", temp->data);
            temp = temp->next;
        }
    }
}
int main()
{
    int n;
    while(1)
    {
        printf("\n1. Insert | 2. Delete | 3. Display | 4. Exit");
        printf("\nEnter a option : ");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            insert_list();
            break;
        case 2:
            delete_list();
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