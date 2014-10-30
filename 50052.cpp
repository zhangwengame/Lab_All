#include <stdio.h>
int max(int a, int b)
    {
        return (a>b? a:b);
    }
   
int main(void)
{    
    int a, b, maximum;
    int repeat, ri;
    
    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d%d",&a, &b);
/*---------*/
             maximum=max(a,b);
        printf("max(%d,%d) = %d\n", a, b, maximum);
    }
}
