#include <stdio.h>
int main(void)
{
    int factor, m, n, number, sum,i,j;
    int repeat, ri;

    scanf("%d",&repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d%d", &m, &n);
        printf("result:\n"); 
        for (i=m;i<=n;i++)
        {
            sum=1;
            for (j=2;j<i;j++)
            if (i%j==0)
            sum+=j;
            if (sum==i)
            {
                       printf("%d = 1", i);
                       
                      
                       for (j=2;j<i;j++)
                       if (i%j==0)
                       printf(" + %d", j);
                        printf("\n");
            }
        }
/*---------*/
    }
}
