#include <stdio.h>
int main(void)
{   
    int i, n;
    int repeat, ri;
    double sum;

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d", &n);	sum=0;
/*---------*/
for(i=1;i<=n;i++)
sum=sum+1.0/i;
        printf("sum = %.6f\n", sum);
    }    	 
}
