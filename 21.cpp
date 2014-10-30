#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int cmp(char *a,char *b)
{
    int i,j,k,l;
    if (strlen(a)<strlen(b)) 
     l=strlen(a);
     else
     l=strlen(b);
    for (i=0;i<l;i++)
     if (a[i]>b[i]) return 1;
     else if (a[i]<b[i])  return -1;
    if (strlen(a)>l) return 1;
    else return -1;
}
int main()
{
    int i,j, n = 0;
    char *color[20], str[10], *temp;
   
    scanf("%s", str);
    while(str[0] != '#') {
        color[n] = (char *)malloc(sizeof(char)*(strlen(str)+1));  
        strcpy(color[n], str);
	    n++;
        scanf("%s", str);
    }
/*---------*/ 
    for (i=0;i<=n-1;i++)
     for (j=i+1;j<=n-1;j++)
      if (cmp(color[i],color[j])>0)
       {
       temp=color[i]; color[i]=color[j]; color[j]=temp;
       }
    for(i = 0; i < n; i++) 
        printf("%s  ", color[i]);
 printf("\n");
}
