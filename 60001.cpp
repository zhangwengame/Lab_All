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

double multi(int n)
{
       double ret=1;
       int i,j;
       for (i=1;i<=n;i++)
       ret=ret*(-1+2*i);
       return ret;
}	
int main(void)
{	
    int i; 
    int repeat, ri;
    double eps, sum, item,t1,t2;

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%le", &eps);
        t1=1; t2=0; i=1;
        while (fabs(fact(i-1)/multi(i))>eps)
        {
            i++;
            t2=t1;
            t1=t1+fact(i-1)/multi(i);  
        }
/*---------*/
        printf("PI = %0.5f\n", 2 * t1);
    }

}
