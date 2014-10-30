#include <stdio.h>
int main(void)   
{
    int i, j, n, x;
    int repeat, ri;
    int a[10],b[11];

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d", &n);
        for(i = 0; i < n; i++)
            scanf("%d", &a[i]);
        scanf("%d", &x);
        for (i=0;i<n&&x>a[i];i++)
        b[i]=a[i];
        b[i]=x;
        for (;i<n;i++)
        b[i+1]=a[i];
/*---------*/
        for(i = 0; i < n + 1; i++)
            printf("%d ",b[i]);
        putchar('\n');   
    }
}
