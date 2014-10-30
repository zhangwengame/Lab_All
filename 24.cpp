#include <stdio.h>
#include <string.h>
int max_len(char *s[],int n)
{
    int i,j,k,ans;
    ans=0;
    for (i=1;i<=n;i++)
     if (strlen(s[i])>ans)
      ans=strlen(s[i]);
    return ans;
}
int main()
{
	int i,n;
	char s[11][80],*p[10];

	scanf("%d",&n);
/*---------*/
    for (i=1;i<=n;i++)
    {
    scanf("%s",s[i]); 
    p[i]=s[i];
    }  
	printf("length=%d\n",max_len(p,n));
}
