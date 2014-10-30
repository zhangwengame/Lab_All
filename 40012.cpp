#include <stdio.h>
#include <math.h>
int main(void)
{
    int denominator, flag;
    int repeat, ri,i;
    double eps, item, sum1,sum2,sum;

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%le", &eps);
/*---------*/
        sum1=1;sum2=0;i=2;
        while (fabs(sum1-sum2)>eps)
        {
              sum2=sum1;
              if ((i&1)>0)
              sum1=sum1+1.0/(-2+3*i);
              else 
              sum1=sum1-1.0/(-2+3*i);
              i++;
        }
        sum=sum1;
      	printf("sum = %.6f\n", sum);
   }
}
