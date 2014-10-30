#include <stdio.h>
int main(void)
{
    char c;
    int blank, digit, lower, other, upper;
    int ri, repeat;

                  blank=digit=lower=other=upper=0;
        c = getchar();
        while (c!='\n')
        {
       
              if (c==' ') blank++;
              else if ((c>='a'&&c<='z')) lower++;
              else if (c>='A'&&c<='Z') upper++;
              else if (c>='0'&&c<='9') digit++; else
              other++; 
              c = getchar();
        }
/*---------*/
       printf("upper: %d lower: %d blank: %d digit: %d other: %d\n", upper, lower, blank, digit, other);
}
