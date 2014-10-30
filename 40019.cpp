#include <stdio.h>
int main(void)
{
    int i, n;
    int repeat, ri;
    double distance, height; 

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%lf%d", &height, &n);
        distance=height;
        for (i=1;i<=n;i++)
        {
            height/=2;
            distance+=height*2;
        }
/*---------*/
distance-=height*2;
      	printf("distance = %.1f, height = %.1f\n", distance, height);
   }
}
