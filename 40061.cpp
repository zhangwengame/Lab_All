#include <stdio.h>
int main(void)
{
    int sum, x;
    int repeat, ri;

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d", &x); sum=0;
        while (x>0)
        {
              if ((x&1)==0)sum+=x;
              scanf("%d", &x);
        }
/*---------*/
        printf("The sum of the even numbers is %d.\n", sum);
    }
}
