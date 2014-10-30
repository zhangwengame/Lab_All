#include "stdio.h"
#include "math.h"
int main(void)
{
    int count, i, m, n, sum,j,flag;
    int repeat, ri;
    int prime(int m);
    count=sum=0;
    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d%d", &m, &n);    count=sum=0;
/*---------*/
             for (i=m;i<=n;i++)
             {
                 flag=1;
                 for (j=2;j<i;j++)
                  if (i%j==0)
                   flag=0;
                 if (i==1)  flag=0;
                   if (i==2)  flag=1;
                 if (flag)
                  {
                          count++;
                          sum+=i;}
             }
        printf("Count = %d, sum = %d\n", count, sum);
    }
}
