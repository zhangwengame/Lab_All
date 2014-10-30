#include <stdio.h>
double fact(int n);
int main(void)
{
    int i,n;
    int repeat, ri;
    double sum;
 

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d", &n);sum=0;
/*---------*/
        for (i=0;i<=n;i++)
        sum=sum+fact(i)     ;
        printf("sum = %.0f\n", sum);
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
