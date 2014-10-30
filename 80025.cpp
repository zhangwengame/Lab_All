#include <stdio.h>
void main()
{
    char s[80];
    int repeat, ri;
    int mirror(char *p);
    
    scanf("%d", &repeat);
    getchar();
    for(ri = 1; ri <= repeat; ri++){
        gets(s);
        if(mirror(s) != 0)
      	    printf("YES\n");
        else
            printf("NO\n");
    }
}
int mirror(char *p)
{
 int i,j=1;
 for (i=0;i<=strlen(p)/2-1;i++)
   if (p[i]!=p[strlen(p)-i-1])  j=0;
 return j;
}
