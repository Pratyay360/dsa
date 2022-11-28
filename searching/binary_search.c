#include<stdio.h>
int binarysearch(int a[100], int n, int s)
{
    int mid, i=0, j=n-1,p;
    while(i<j)
    {   mid=(i+j)/2;
    
        if(a[i]==s)
        {
            p=i;
            return p;        }
        else if(s<a[mid])
        {
            j=mid-1;
        }
        else
        {
            i=mid+1;
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
    p = binarysearch(a, n, s);
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