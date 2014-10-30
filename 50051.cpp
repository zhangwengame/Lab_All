#include <stdio.h>
int main(void)
{    
    int n;
    int repeat, ri,i,j,d;

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d", &n);
        for (i=1;i<=n;i++)
        {
            for (j=1;j<=n-i;j++) printf(" ");
            for (j=1;j<=i-1;j++) printf("%d ", i);
            printf("%d\n",i);
        }
/*---------*/
    }
}
