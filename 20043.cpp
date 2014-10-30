#include <stdio.h>
double fact(int n);
int main(void)
{
    int m, n;
    int repeat, ri;
    double s;

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d%d", &m, &n);
/*---------*/
        printf("result = %.0f\n", fact(n)/(fact(m)*fact(n-m)));
    }
}
double fact(int n)
{
       double ret=1;
       int i,j;
       for (i=1;i<=n;i++)
       ret=ret*i;
       return ret;
}
