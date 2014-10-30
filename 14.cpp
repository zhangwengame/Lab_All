#include <stdio.h>
double p(int n, double x)
{
       if (n==0)
        return 1;
       else if (n==1)
        return x;
       else 
        return (((2.0*n-1.0)*p(n-1,x)-(n-1)*p(n-2,x))/n);
}
int main(void)
{
   int repeat, ri;
   int n;
   double x, result;

   scanf("%d", &repeat);
   for(ri = 1; ri <= repeat; ri++)
   {
       scanf("%d%lf", &n, &x);
       result = p(n, x);
       printf("p(%d, %.2lf)=%.2lf\n", n, x, result);
   }
}
