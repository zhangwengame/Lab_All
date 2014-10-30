#include <stdio.h>
int main(void)
{
    int i, n;
    int repeat, ri;
    double mypow, x;

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%lf%d", &x, &n);
/*---------*/
             mypow=1;
             for (i=1;i<=n;i++)
             mypow=mypow*x;
        printf("%.2f\n", mypow);
   }
}
