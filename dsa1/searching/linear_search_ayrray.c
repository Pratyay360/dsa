#include<stdio.h>
int linearsearch(int a[], int n, int s)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(s==a[i])
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int a[100], n, s, p;
    printf("Enter Size of array : ");
    scanf("%d", &n);
    printf("Enter Array : \n");
    for(int i= 0; i<n;i++)
    {
        printf("Enter Element : ");
        scanf("%d", &a[i]);
    }
    printf("Entered Array : \n");
    for(int i=0;i<n;i++)
    {
        printf("%d, ", a[i]);
    }
    printf("\nEnter element to search : ");
    scanf("%d", &s);
    p = linearsearch(a, n, s);
    if(p!=-1)
    {
        printf("\nElement Found at position %d\n", p+1);
    }
    else
    {
        printf("\nElement Not Found !!!!!!!!!\n");
    }
    return 0;
}