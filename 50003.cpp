#include <stdio.h>
int main(void)
{
    int n, sum,x,i;
    int ri, repeat;

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){	
        scanf("%d",&x); sum=0;
        while(x>0)
         {
                         
                          if (x&1>0)
                          sum+=x;
                           scanf("%d",&x);
         }
/*---------*/
        printf("The sum of the odd numbers is %d.\n", sum);
   }
}
