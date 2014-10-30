#include "stdio.h"
#include "math.h"
int prime(int n);
int main(void)
{
    int i, k, m,j;
    int repeat, ri;

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d", &m);
        printf("%d = ", m);
/*---------*/
        for (j=2;j<m;j++)
         while (m%j==0&&j<m)
         {
          printf("%d*",j);
          m/=j;
          }
        printf("%d\n", m);
    }
}
