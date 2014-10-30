#include <stdio.h>
int main(void)
{    
    int lower, upper;
    int repeat, ri,i;
    double celsius, fahr;  

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d%d", &lower, &upper);
       
        printf("fahr  celsius\n");
        for (i=lower;i<=upper;i+=2)
        {
            printf("%3.0f %6.1f\n",i*1.0,5 * (i*1.0 - 32) / 9);
        }
/*---------*/
    }
}
