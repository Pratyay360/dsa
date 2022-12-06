#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*top,*temp,*temp1,*temp2;
void push()
{
    int item;
    printf("Enter a item : ");
    scanf("%d", &item);
    if(top==NULL)
    {
        top = (struct node*)malloc(sizeof(struct node));
        top->data = item;
        top->next = NULL;
    } 
    else
    {
        temp = (struct node*)malloc(sizeof(struct node));
        temp->data = item;
        temp->next = top;
        top = temp;
    }
}
void pop()
{
    if(top==NULL)
    {
        printf("List is empty");
    }
    else
    {   
        int del;
        del = top->data;
        temp = top;
        top = top->next;
        temp->next = NULL;
        free(temp);
        printf("DELETED : %d", del);
    }
}
void display()
{
    if(top==NULL)
    {
        printf("List is empty");
    }
    else
    {
        temp2 = top;
        while (temp2!=NULL)
        {
            printf("[%d]\n", temp2->data);
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
            push();
            break;
        case 2:
            pop();
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