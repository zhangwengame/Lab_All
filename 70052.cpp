#include "stdio.h"
#define MAXLEN 80
int main(void)
{	
    char cc, ch;
    char str[MAXLEN];
    int i,count,len;
    int repeat, ri;

    scanf("%d", &repeat);
    getchar();
    for(ri = 1; ri <= repeat; ri++){
        i = 0;
    	while((str[i] = getchar( )) != '\n') 
            i++; 
    	str[i] = 0; len=i;
	cc = getchar();
	getchar();
    count=0;	
	for (i=0;i<len;i++)
	if (cc==str[i])
	 count++;
/*---------*/
      	printf("count = %d\n", count);
   }
}
