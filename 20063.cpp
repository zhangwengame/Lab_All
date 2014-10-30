#include <stdio.h>
int main(void)
{
    int flag, i, n;
    int repeat, ri;
    double item, sum;

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d", &n);sum=0;
/*---------*/
             for (i=1;i<=n;i++)
             if (i&1>0)
             sum=sum+i*1.0/(-1+2*i);
             else
             sum=sum-i*1.0/(-1+2*i);
      	printf("sum = %.3f\n", sum);
    }
}
