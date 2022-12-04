#include<stdio.h>
void selectionsort(int a[100], int n)
{
    int loc, temp, i, j;
    for(i=0;i<n-1;i++)
    {
        loc=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[loc])
            {
                loc=j;
            }
        }
        if(loc!=i)
        {
            temp=a[i];
            a[i]=a[loc];
            a[loc]=temp;
        }
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
    selectionsort(a, n);
    printf("\nsorted Array : \n");
    for(int i=0;i<n;i++)
    {
        printf("%d, ", a[i]);
    }

    return 0;
}