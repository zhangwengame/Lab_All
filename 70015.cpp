#include <stdio.h>
int main(void)
{
    int i, index1, n, t,tmp;
    int repeat, ri;
    int a[10];

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d", &n);
        for(i = 0; i < n; i++)
            scanf("%d", &a[i]);
        index1=n-1;
        for (i=n-1;i>=0;i--)
        if (a[i]<a[index1])
        index1=i;
        tmp=a[index1]; a[index1]=a[0];a[0]=tmp;
        index1=n-1;
        for (i=n-1;i>=0;i--)
        if (a[i]>a[index1])
        index1=i;
        tmp=a[index1]; a[index1]=a[n-1];a[n-1]=tmp;
/*---------*/
        printf("After swap: ");
        for(i = 0; i < n; i++) 
            printf("%d ", a[i]);
        printf("\n");
    }
}
