#include <stdio.h>
int main(void)
{
    int count, in;
    int repeat, ri;

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
     	scanf("%d", &in);
/*---------*/
count=0;
if (in==0) count++;
while(in)
{
         count++;
         in/=10;
}
     	printf("count = %d\n", count);
   }
}
