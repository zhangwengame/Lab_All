#include "stdio.h"
#define MAXLEN 80
int main(void)
{ 
    char cc, ch;
    char str[MAXLEN];
    int count, flag, i, index,len;
    int repeat, ri;

    scanf("%d", &repeat);
    getchar();
    for(ri = 1; ri <= repeat; ri++){
        cc = getchar();
        getchar();

        i = 0;
        while((ch = getchar()) != '\n'){
            str[i++] = ch;
        }
        str[i] = 0; len=i-1;
        flag=0;
        for (i=1;i<=len;i++)
        if (cc==str[i])
         {
                      flag=1;
                      index=i;
         }
/*---------*/
        if(flag != 0)  
            printf("index = %d\n", index);
        else 
            printf("Not Found\n");
    }
}
