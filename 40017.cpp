#include <stdio.h>
int main(void)
{
    int i, n,fz,fm,tmp;
    int repeat, ri;
    double denominator, numerator, sum, temp;

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d", &n);sum=0;
        fz=1;fm=1;
        for (i=1;i<=n;i++)
        {
            tmp=fz;
            fz=fm+fz;
            fm=tmp;
            sum=sum+fz*1.0/fm;
        }
/*---------*/
     	printf("sum = %.2f\n",sum);
   }
}
