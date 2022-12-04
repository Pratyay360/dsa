#include<stdio.h>
void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void heapify(int a[100], int n, int i)
{
    int largest = i;
    int l = 2*i;
    int r = 2*i+1;
    if(l<n && a[l]>a[largest])
    {
        largest = l;
    }
    else{
        largest = i;
    }
    if(r<n && a[r]>a[largest])
    {
        largest = r;
    }
    if(largest!=i)
    {
        swap(a[i], a[largest]);
        if(largest<=n/2)
        {heapify(a, n, largest);}
    }
}
void heap_create(int a[100], int n)
{
    for(int i=n/2;i>=0;i--)
    {
        heapify(a, n, i);
    }
}
void heapsort(int a[100], int n)
{
    heap_create(a, n);
    for(int i=n;i>=2;i--)
    {
        swap(a[0], a[i]);
        heapify(a, i, 0);
    }
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
    heapsort(a, n);
    printf("\nsorted Array : \n");
    for(int i=0;i<n;i++)
    {
        printf("%d, ", a[i]);
    }

    return 0;
}