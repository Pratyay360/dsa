#include <stdio.h>
void quicksort(int a[100], int i, int j)
{
    int l, h, mid, temp;
    l = i;
    h = j;
    mid = a[(i + j) / 2];
    while (l <= h)
    {
        while (a[l] < mid)
        {
            l++;
        }
        while (a[h] > mid)
        {
            h--;
        }
        if (l <= h)
        {
            temp = a[l];
            a[l] = a[h];
            a[h] = temp;
            l++;
            h--;
        }
    }
    if (i < h)
    {
        quicksort(a, i, h);
    }
    if (l < j)
    {
        quicksort(a, l, j);
    }
}
int main()
{
    int a[100], n, s, p;
    printf("Enter Size of array : ");
    scanf("%d", &n);
    printf("Enter Array : \n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter Element : ");
        scanf("%d", &a[i]);
    }
    printf("Entered Array : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", a[i]);
    }
    quicksort(a, 0, n-1);
    printf("\nsorted Array : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", a[i]);
    }

    return 0;
}