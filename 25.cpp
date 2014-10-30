#include <stdio.h>
#include <string.h>
char *str_cat(char *s,char *t)
{
     char *p;
     int i,j,len1,len2;
     p=s;     
     len1=strlen(s);
     len2=strlen(t);
     for (i=len1;i<len1+len2;i++)
     s[i]=t[i-len1];
     s[len1+len2]='\0';
     return s;
}
int main()
{
	char s[80],t[80];

	gets(s);
	gets(t);
	puts(str_cat(s,t));
}
