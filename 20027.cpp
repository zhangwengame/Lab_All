#include <stdio.h>
int main(void)
{
    int time1, time2, hour, minutes,tmp;

   scanf("%d%d", &time1, &time2);
/*---------*/
tmp=(time2/100-time1/100)*60+(time2%100-time1%100);
hour=tmp/60;
minutes=tmp%60;
   printf("The train journey time is %d hours %d minutes.\n", hour, minutes);
}
