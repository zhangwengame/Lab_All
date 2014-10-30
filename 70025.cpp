#include "stdio.h"
int main(void)
{
    int day, day_year, month, year,flag,i;
    int repeat, ri;
    int mm[13]={0,31,0,31,30,31,30,31,31,30,31,30,31};
    
    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d%d%d", &year, &month, &day);
/*---------*/
        flag=0;day_year=0;
        if (year%4==0) flag=1;
        if (year%100==0&&year%400!=0) flag=0;
        for (i=1;i<=month-1;i++) 
         if (i!=2)
          day_year+=mm[i];
         else
          {
             if (flag) day_year+=29;
             else day_year+=28;
          }
          day_year+=day;
        printf("days of year: %d\n", day_year);
    }
}
