#include <stdio.h>
struct time{
    int hour, minute, second;
};
void timecal(struct time *p, int n)
{
        p->second+=n;
        p->minute+=p->second/60;
        p->second%=60;
        p->hour+=p->minute/60;
        p->minute%=60;
        p->hour%=24;
}

int main(void)
{
    int n;
    int repeat, ri;
    struct time time,*p1;

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d:%d:%d", &time.hour, &time.minute, &time.second);
        p1=&time;
        scanf("%d",&n);
        timecal(p1,n);
/*---------*/
        printf("time: %d:%d:%d\n", time.hour, time.minute, time.second);
    }
}
