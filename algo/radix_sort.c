#include<stdio.h>
void radixsort(int a[100], int n)
{
   
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
    radixsort(a, n);
    printf("\nsorted Array : \n");
    for(int i=0;i<n;i++)
    {
        printf("%d, ", a[i]);
    }

    return 0;
}