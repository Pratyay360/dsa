#include<stdio.h>
void radixsort(int a[100], int n)
{
   int bucket[10][10], buck[10], i, j, k, r, num=0, div=1, lar=a[0], passes;
    for(i=1;i<n;i++)
    {
        if(a[i]>lar)
        lar=a[i];
    }
    while(lar>0)
    {
        num++;
        lar=lar/10;
    }
    for(passes=0;passes<num;passes++)
    {
        for(i=0;i<10;i++)
        {
            buck[i]=0;
        }
        for(i=0;i<n;i++)
        {
            r=(a[i]/div)%10;
            bucket[r][buck[r]]=a[i];
            buck[r]+=1;
        }
        i=0;
        for(k=0;k<10;k++)
        {
            for(j=0;j<buck[k];j++)
            {
                a[i]=bucket[k][j];
                i++;
            }
        }
        div=div*10;
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
    radixsort(a, n);
    printf("\nsorted Array : \n");
    for(int i=0;i<n;i++)
    {
        printf("%d, ", a[i]);
    }

    return 0;
}