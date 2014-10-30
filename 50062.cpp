#include "stdio.h"
#include "math.h"
int main(void)
{
   int i, m, n;
   int repeat, ri;
   long f;
   long fib(int n);

   scanf("%d",&repeat);
   for(ri = 1; ri <= repeat; ri++){
        scanf("%d%d", &m, &n);
        for (i=1;fib(i)<m;i++);
        for (;fib(i)<n;i++)
        printf("%ld ",fib(i));
/*---------*/
        printf("\n");
    }
}
long fib(int n)
{
     long ret=0,t1,t2,t3;
     int i;
     if (n==1) return 1;
     if (n==2) return 1;
     t1=1;t2=1;
     for (i=1;i<=n-2;i++)
     {
         t3=t1+t2;
         t1=t2;
         t2=t3;
     }
     return t2;
}
