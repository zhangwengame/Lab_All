#include <stdio.h>     
#include <string.h>
int main(void)
{
    char str[80],ch;
    int i, s;
    int repeat, ri,len;

    scanf("%d", &repeat);
    getchar();
    for(ri = 1; ri <= repeat; ri++){
        i = 0;
       while((ch = getchar()) != '\n'){
            if ((ch>='0'&&ch<='9'))
            {
            str[i]=ch;
            i++;
            }
           /* if (ch=='-') flag=1;*/
        }
        str[i] = 0;
        len=i; s=0;
/*---------*/
        for (i=0;i<len;i++)
         {
               s=s*(long)10+(long)str[i]-(long)'0';
                       
         } 
/*---------*/  
	printf("%d\n",s);
    }
}
