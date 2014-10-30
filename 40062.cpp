#include <stdio.h>
#include <math.h>
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
    int i;
    int repeat, ri;
    double item, s, x; 
    double fact(int n);

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%lf", &x); s=0;
/*---------*/
for(i=1;fabs(pow(x,i))/fact(i)>=0.00001;i++)
{
                                            s=s+fabs(pow(x,i))/fact(i);
}
             
      	printf("s = %.2f\n", s);
    }
}
