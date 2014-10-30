#include "stdio.h"
#include "math.h"
int d[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};

int main(void)
{
    int count, i, j, k, m, n, number;

    scanf("%d%d", &m, &n);
    if( m % 2 != 0) m = m + 1; count=0;
    for (i=m;i<=n;i+=2)
    {        
        for (j=0;j<=24;j++)
         for (k=j+1;k<=24;k++)
          if (d[j]+d[k]==i)
          {
           printf("%d=%d+%d ", i, d[j], d[k]);
           count++;
           if (count%5==0) printf("\n");
           goto part1;
          }
        part1:;
    }
/*---------*/
}
