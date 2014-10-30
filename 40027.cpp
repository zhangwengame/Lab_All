#include <stdio.h>
int main(void)
{
    int digit, in, power, temp,len,a[10],i;
    int repeat, ri;

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d", &in);
        if (in<0) in=-in; len=0;
        while (in)
        {
            len++;
            a[len]=in%10;
            in/=10;  
        }
        for (i=len;i>=1;i--)
        printf("%d ",a[i]);
/*---------*/
     	printf("\n");
   }
}
