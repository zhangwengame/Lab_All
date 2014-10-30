#include <stdio.h>
int main(void)
{
    int repeat, ri;
    int minutes, seconds;
    double cost, mile;
	
    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%lf%d%d", &mile, &minutes, &seconds);
        mile=mile+(minutes+seconds/60.0)/5.0;
        if (mile<=3) cost=10;
        else {cost=10+(mile-3)*2;
              if (mile>=10) cost=cost+(mile-10);   
              }
/*---------*/
	printf("cost = %.0f\n", cost);
    }
}
