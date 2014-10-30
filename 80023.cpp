#include<stdio.h>
#include<string.h>
int main()
{
    char c;
    char str[80];
    int repeat, ri,i;
    void delchar(char *str, char c);

    scanf("%d", &repeat);
    getchar();
    for(ri = 1; ri <= repeat; ri++){
        gets(str);
        scanf("%c", &c);
        getchar();
/*---------*/
        i=0;
        while (i<=strlen(str))
        {
              if (str[i]==c)
               strcpy(str+i,str+i+1);
              else
               i++;
        }
        printf("result: ");
        puts(str);
    }
}
