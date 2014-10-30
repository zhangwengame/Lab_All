#include <stdio.h>
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
    int n;
    double factorial;
    double fact(int n);

    scanf ("%d", &n);
/*---------*/
    printf("%d! = %f\n", n, fact(n));
}
