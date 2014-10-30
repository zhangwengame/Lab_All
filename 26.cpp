#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char newstr[80];
char *fun(char *a,char be,char en)
{
     int i,j,k,len,st1,en1;
     char *p;
     p=(char *)calloc(80,sizeof(char));
     len=strlen(a);
     for (i=len-1;i>=0;i--)
      if (a[i]==be)
       st1=i;
     for (i=len-1;i>=0;i--)
      if (a[i]==en)      
       en1=i; 
     for (i=st1;i<=en1;i++)
     p[i-st1]=a[i];
     p[en1-st1+1]='\0';
     return p;
}
int main()
{
	char str[80],c_begin,c_end;
	char *fun(char *p,char c_begin,char c_end);

	scanf("%s",str);
	getchar();
	c_begin=getchar();
	getchar();
	c_end=getchar();
	puts(fun(str,c_begin,c_end));
}
