#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head,*temp,*temp1,*temp2;
void insert_list()
{
    int item;
    printf("Enter a item : ");
    scanf("%d", &item);
    if(head==NULL)
    {
        head = (struct node*)malloc(sizeof(struct node));
        head->data = item;
        head->next = NULL;
    }
    else
    {
        struct node *temp1 = (struct node*)malloc(sizeof(struct node));
        temp1->data = item;
        temp1->next = head;
        head=temp1;
        
    }
}
void delete_list()
{
    if(head==NULL)
    {
        printf("List is empty");
    }
    else
    {
        temp2 = head;
        head = head->next;
        temp2->next = NULL;
        printf("DELETED : %d", temp2->data);
        free(temp2);
    }
}
void display()
{
    if(head==NULL)
    {
        printf("List is empty");
    }
    else
    {
        temp2 = head;
        while(temp2!=NULL)
        {
            printf("[%d]-> ", temp2->data);
            temp2 = temp2->next;
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