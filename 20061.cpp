#include <stdio.h>
int main(void)
{   
    int repeat, ri;
    double cost, e;

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%lf", &e);
        cost=e*0.53;
/*---------*/
if(e>50) cost=cost+(e-50)*0.05;
        printf("cost = %.2f\n", cost);
    } 
}
