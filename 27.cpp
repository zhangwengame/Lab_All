#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char p[16];
int main()
{
	char	*change(char s[4][20]);
	char	s[4][20];
	int	i;
	for(i=0;i<4;i++)
		scanf("%s",s[i]);
	puts(change(s));
}
char	*change(char	s[4][20])
{
	int	i,t,len;
	char *p;
	p=(char *)calloc(80,sizeof(char));
	for (i=0;i<4;i++)
	strcpy(p+2*i,s[i]+strlen(s[i])-2);
	p[8]='\0';
/*---------*/
	return (p);
}
