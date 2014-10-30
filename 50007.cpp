#include "stdio.h"
int main(void)
{
    int i, m, n,tmp,sum;
    int repeat, ri;
    int is(int number); 
  
    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d%d", &m, &n);
        printf("result:\n");
        for (i=m;i<=n;i++)
         {
                          sum=0;
                          tmp=i;
                          while (tmp)
                          {
                                sum+=(tmp%10)*(tmp%10)*(tmp%10);
                                tmp/=10;
                          }
                          if (sum==i)
                          printf("%d\n", i);
         }
/*---------*/
    }
}
