#include <stdio.h>
int main(void)
{
    char sign;
    int x, y; 
    int repeat, ri;

    scanf("%d",&repeat);
    for(ri = 1;ri <= repeat; ri++){
        scanf("%d%c%d", &x, &sign, &y);
        if (sign=='*')
        printf("%d * %d = %d\n", x, y, x * y);
              if (sign=='/')
printf("%d / %d = %d\n", x, y, x / y);
      if (sign=='%')
printf("%d Mod %d = %d\n",x, y, x % y);
if (sign!='*'&&sign!='/'&&sign!='%')
printf("Invalid operator\n");
/*---------*/
    }
}
