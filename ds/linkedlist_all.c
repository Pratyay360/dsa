#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head,*temp,*temp1,*temp2;
void create()
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
        temp = head;
        while(temp->next!=NULL)
        {
            temp = temp->next;
        }
        temp1 = (struct node*)malloc(sizeof(struct node));
        temp1->data = item;
        temp1->next = NULL;
        temp->next = temp1;
    }
}
void insert_first()
{
    if(head==NULL)
    {
        printf("List is empty");
    }
    else
    {
        int item;
        printf("Enter a item : ");
        scanf("%d", &item);
        temp1 = (struct node*)malloc(sizeof(struct node));
        temp1->data = item;
        temp1->next = head;
        head = temp1;
    }
}
void insert_last()
{
    if(head==NULL)
    {
        printf("List is empty");
    }
    else
    {
        int item;
        printf("Enter a item : ");
        scanf("%d", &item);
        temp1 = (struct node*)malloc(sizeof(struct node));
        temp1->data = item;
        temp=head;
        while(temp->next!=NULL)
        {
            temp = temp->next;
        }
        temp->next = temp1;
        temp1->next = NULL;
    }
}
void insert_givenposition()
{
    if(head==NULL)
    {
        printf("List is empty");
    }
    else
    {
        int item, pos;
        printf("Enter a item : ");
        scanf("%d", &item);
        printf("Enter a position : ");
        scanf("%d", &pos);
        temp1 = (struct node*)malloc(sizeof(struct node));
        temp1->data = item;
        temp = head;
        while(pos>2)
        {
            temp = temp->next;
            pos--;
        }
        temp1->next = temp->next;
        temp->next = temp1;
    }
}
void delete_first()
{
    if(head==NULL)
    {
        printf("List is empty");
    }
    else
    {
        temp = head;
        head=head->next;
        temp->next = NULL;
        printf("DELETED : %d", temp->data);
        free(temp);
    }
}
void delete_last()
{
    if(head==NULL)
    {
        printf("List is empty");
    }
    else
    {
        temp = head;
        while(temp->next->next!=NULL)
        {
            temp = temp->next;
        }
        temp1 = temp->next;
        temp->next = NULL;
        printf("DELETED : %d", temp1->data);
        free(temp1);
    }
}
void delete_givenposition()
{
    if(head==NULL)
    {
        printf("List is empty");
    }
    else
    {
        int pos;
        printf("Enter a position : ");
        scanf("%d", &pos);
        temp = head;
        while(pos>2)
        {
            temp = temp->next;
            temp1 = temp->next;
            pos--;
        }
        temp->next = temp1->next;
        temp1->next = NULL;
        printf("DELETED : %d", temp1->data);
        free(temp1);
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
void insert_node()
{
    int item;   
    printf("\n| 1. Insert at first | 2. Insert at last | 3. Insert at given position");
    printf("\nEnter a item : ");
    scanf("%d", &item);
    switch (item)
    {
    case 1:
        insert_first();
        break;
    case 2:
        insert_last();
        break;
    case 3:
        insert_givenposition();
        break;
    default:
        break;
    }
}
void delete_node()
{
    int item;
    printf("\n| 1. Delete first | 2. Delete last | 3. Delete given position |");
    printf("\nEnter a item : ");
    scanf("%d", &item);
    switch (item)
    {
    case 1:
        delete_first();
        break;
    case 2:
        delete_last();
        break;
    case 3:
        delete_givenposition();
        break;
    default:
        break;
    }
}
int main()
{
    int n;
    while(1)
    {
        printf("\n1. create | 2. Insert Node | 3. Delete Node | 4. Display | 5. Exit");
        printf("\nEnter a option : ");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            create();
            break;
        case 2:
            insert_node();
            break;
        case 3:
            delete_node();
            break;
        case 4:
            display();
            break;
        case 5:
            exit(0);
            break;
        default:
            continue;
        }
    }
    return 0;
}