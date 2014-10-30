#include <stdio.h>
int main(void)
{
    char c;
    int count, word;
    int repeat, ri;

    scanf("%d", &repeat);
    getchar();
    for(ri = 1; ri <= repeat; ri++){
        c = getchar(); 
        while (c==' ') c=getchar(); word=0;
        while (c!='\n')
        {
       
              if (c!=' ') {word++;  while  (c!=' '&&c!='\n') c=getchar();  }
              while (c==' ') c=getchar();              
        }
/*---------*/
        printf("count = %d\n", word);
    }
}
