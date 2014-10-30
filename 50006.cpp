#include "stdio.h"
int main(void)
{
    int count, digit, in,tmp; 
    int repeat, ri;
    int countdigit(int number, int digit);

    scanf("%d",&repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d%d", &in, &digit);count=0;
        
/*---------*/
             tmp=in; if (tmp<0) tmp=-tmp;
        while     (tmp)
        {
                  if (tmp%10==digit) count++;
                  tmp/=10;
        }
        printf("Number %d of digit %d: %d\n", in, digit, count);
    }
}
