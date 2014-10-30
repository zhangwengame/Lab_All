#include <stdio.h>
int main(void)
{
    int i, index, n;
    int ri, repeat;
    int a[10];

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d", &n); 
        for(i = 0; i < n; i++)
            scanf("%d", &a[i]);
        index=n-1;
        for (i=n-1;i>=0;i--)
        if (a[i]>a[index])
        index=i;
/*---------*/
        printf("max = %d, index = %d\n", a[index], index);
    }
}
