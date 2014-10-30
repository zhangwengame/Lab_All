#include <stdio.h>
int sign(int x);
int main(void)
{
    int x, y;
    int repeat, ri;

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d",&x);
/*---------*/
             if (x>0) y=1;
             else if(x<0) y=-1;
             else y=0;
        printf("sign(%d) = %d\n", x, y);
    }
}
