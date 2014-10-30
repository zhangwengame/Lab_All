#include <stdio.h>
void sort(int a[],int n)
{
     int i,j,temp;
     for (i=0;i<n;i++)
         for (j=i+1;j<n;j++)
          if (a[i]>a[j])
           {
                        temp=a[i];
                        a[i]=a[j];
                        a[j]=temp;
           }
}
int main(void)
{
    int i, index, k, n, temp,j;
    int repeat, ri;
    int a[10];

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d", &n);
        for(i = 0; i < n; i++)
            scanf("%d", &a[i]);
        sort(a,n);
/*---------*/
        printf("After sorted: ");
        for(i = 0; i < n; i++) 
            printf("%d ", a[i]);
        printf("\n");
    }
}
