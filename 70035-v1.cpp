#include "stdio.h"
#include "string.h"
#define MAXLEN 80
int main(void)
{  
    char ch;
    char str[MAXLEN], num[MAXLEN];
    int i, k;
    int repeat, ri;
    long number;

    scanf("%d", &repeat);
    getchar();
    for(ri = 1; ri <= repeat; ri++){
        i = 0;
        while((ch = getchar()) != 'n'){
            str[i]=ch;
            i++;
        }
        str[i] = 0;    
number=0;
for(i=0;str[i]!='';i++){
if(str[i]>='0'&&str[i]<='9')
number=number*16+str[i]-'0';
else if(str[i]>='A'&&str[i]<='F')
number=number*16+str[i]-'A'+10;
else if(str[i]>='a'&&str[i]<='f')
number=number*16+str[i]-'a'+10;
}    
      printf("Dec = %ldn",number);
    }
}
