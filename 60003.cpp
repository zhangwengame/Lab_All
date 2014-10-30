#include <stdio.h>
int main(void)
{
    char c;
    int blank, digit, letter, other;
    int ri, repeat;

    scanf("%d", &repeat);
    getchar();
    for(ri = 1; ri<=repeat; ri++){
                  blank=digit=letter=other=0;
        c = getchar();
        while (c!='\n')
        {
       
              if (c==' ') blank++;
              else if ((c>='a'&&c<='z')||(c>='A'&&c<='Z')) letter++;
              else if (c>='0'&&c<='9') digit++; else
              other++; 
              c = getchar();
        }
/*---------*/
        printf("letter = %d, blank = %d, digit = %d, other = %d\n", letter, blank, digit, other);
    }
}
