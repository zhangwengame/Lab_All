#include "stdio.h"
#include "string.h"
#define MAXLEN 80
int main(void)
{  
    char ch;
    char str[MAXLEN], num[MAXLEN];
    int i, k;
    int repeat, ri,len,flag;
    long number;

    scanf("%d", &repeat);
    getchar();
    for(ri = 1; ri <= repeat; ri++){
        i = 0; /*flag=0;*/
        while((ch = getchar()) != '\n'){
            if ((ch>='A'&&ch<='F')||(ch>='0'&&ch<='9')||(ch>='a'&&ch<='f'))
            {
            str[i]=ch;
            i++;
            }
           /* if (ch=='-') flag=1;*/
        }
        str[i] = 0; len=i; number=0;
/*---------*/
        for (i=0;i<len;i++)
         {
               if (str[i]>='A'&&str[i]<='F')    number=number*(long)16+(long)str[i]-(long)'A'+(long)10;
               else if (str[i]>='a'&&str[i]<='f')  number=number*(long)16+(long)str[i]-(long)'a'+(long)10;
               else number=number*(long)16+(long)str[i]-(long)'0';
                       
         } 
      /*  if (flag) number=-number;*/
      	printf("Dec = %ld\n",number);
    }
}
