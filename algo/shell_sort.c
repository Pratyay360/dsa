#include <stdio.h>
#define max 20
void shell_sort(int a[], int n)
{
    int i, j, temp, incr;
    for (int intr = n / 2; intr > 0; intr /= 2) {
    for (int i = intr; i < n; i += 1) {
      int temp = a[i];
      int j;
      for (j = i; j >= intr && a[j - intr] > temp; j -= intr) {
        a[j] = a[j - intr];
      }
      a[j] = temp;
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
    shell_sort(a, n);
    printf("\nsorted Array : \n");
    for(int i=0;i<n;i++)
    {
        printf("%d, ", a[i]);
    }
    return 0;
}