#include<stdio.h>
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
    mergesort(a, n);
    printf("\nsorted Array : \n");
    for(int i=0;i<n;i++)
    {
        printf("%d, ", a[i]);
    }

    return 0;
}
void merge(int low, int mid,int high)
{
    int temp[100], i = low, j= mid+1, k = high;
    while((i<=mid)&&(j<=high))
    {
        if(a)
    }
}
void mergesort(int low, int high)
{
    int mid;
    if(low!=high)
    {
        mid=(low+high)/2;
        mergesort(low, mid);
        mergesort(mid+1,high);
        merge(low,mid,high);
    }
}