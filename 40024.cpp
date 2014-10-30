#include "stdio.h"
int main(void)
{
    int i, digit, m, n, number, sum,j;
    int repeat, ri;

    scanf("%d",&repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d%d", &m, &n);
        printf("result:\n");
        for (i=m;i<=n;i++)
        {
            j=i; sum=0;
            while (j)
            {
                  sum=sum+(j%10)*(j%10)*(j%10);
                  j/=10;
            }
            if (sum==i)
            printf("%d\n",i);
        }
/*---------*/
    }
}
