#include<stdio.h>
#include<stdlib.h>
#define max 5
int stack[max];
int top = -1;
void push()
{
    if(top==max-1)
    {
        printf("Stack is full");
    }
    else
    {
        int item;
        printf("Enter a item : ");
        scanf("%d", &item);
        top++;
        stack[top] = item;
    }
}
void pop()
{
    if(top==-1)
    {
        printf("Stack is empty");
    }
    else
    {
        printf("POP : %d", stack[top]);
        top--;
    }

}
void display()
{
    if(top==-1)
    {
        printf("Stack is empty");
    }
    else
    {
        int i=top;
        while(i>=0)
        {
            printf("[%d]\n", stack[i]);
            i--;
        }
    }
}
int main()
{
    int n;
    while(1)
    {
        printf("\n1. Push | 2. Pop | 3. Display | 4. Exit");
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