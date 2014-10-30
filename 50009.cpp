#include "stdio.h"
#include "math.h"
double fact(int n)
{
       double ret=1;
       int i,j;
       for (i=1;i<=n;i++)
       ret=ret*i;
       return ret;
}

double funcos(double e, double x)
{
       double ret,t1,t2;
       int i,j;
       ret=0;
       t1=pow(x,0)/fact(0); i=1;
       while (fabs(pow(x,-2+2*i)/fact(-2+2*i))>e)
       { 
           i++;
           if (i%2==0)  
            t1-=pow(x,-2+2*i)/fact(-2+2*i);
           else
            t1+=pow(x,-2+2*i)/fact(-2+2*i);
       }
       ret=t1;
       return ret;
}
int main(void)
{
    int repeat, ri;
    double e, sum, x; 

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%lf%lf", &e, &x);
        
/*---------*/
        sum=funcos(e,x);
        printf("sum = %lf\n", sum);
    }
}
