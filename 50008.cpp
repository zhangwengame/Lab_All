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
    int i, m;
    double sum; 

    scanf("%d", &m);
    sum=0;
    for (i=1;i<=m;i++)
     sum+=fact(i);
/*---------*/
    printf("1!+2!+...+%d! = %f\n", m, sum); 
}
