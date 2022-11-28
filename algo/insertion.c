#include<stdio.h>
int insertionsort(int a[100], int n)
{
    int temp, i, j, k;
    for(i=1;i<n;i++)
    {
        k = a[i];
        for(j=i-1;j>=0 && k<a[j];j--)
        {
            a[j+1] = a[j];
        }
        a[j+1]=k;
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
    insertionsort(a, n);
    printf("\nsorted Array : \n");
    for(int i=0;i<n;i++)
    {
        printf("%d, ", a[i]);
    }

    return 0;
}