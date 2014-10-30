#include <stdio.h>
int main(void)
{
    int flag, i, n, t;
    int repeat, ri;
    double item, sum;

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d", &n);
/*---------*/sum=0;
             for(i=1;i<=n;i++)
             if (i&1>0)
             sum=sum+1.0/(-2+3*i);
             else
             sum=sum-1.0/(-2+3*i);
      	printf("sum = %.3f\n", sum);
    }
}
