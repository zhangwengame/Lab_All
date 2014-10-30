#include "stdio.h"
double fact(int n)
{
       double ret=1;
       int i,j;
       for (i=1;i<=n;i++)
       ret=ret*i;
       return ret;
}

int main(void)
{
    int i, j, n;
    int repeat, ri;
    double e, product;

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d", &n);e=0;
/*---------*/
             for (i=0;i<=n;i++)
             e+=1.0/fact(i);
    	printf("e = %0.4f\n", e);
  }
}
