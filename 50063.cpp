#include "stdio.h"
int main(void)
{
    int i, m, n;
    int repeat, ri;
    int factorsum(int number); 
  
    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d%d", &m, &n);
/*---------*/
        for (i=m;i<=n;i++)
        if (factorsum(i)==i) 
        printf("%d ", i);
        printf("\n");
    }
}
int factorsum(int number)
{
   int ret=1,tmp,i;
   
   for (i=2;i<number;i++)
   if (number%i==0) ret+=i;
    return ret;
}
