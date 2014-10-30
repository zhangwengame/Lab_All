#include<stdio.h>
#include<string.h>
int main()
{
	int i,ri,repeat,ans;
	char *date[]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
	char str[80];

	scanf("%d",&repeat);
	getchar();
	for(ri=1;ri<=repeat;ri++){
		scanf("%s",str);	
		ans=-1;
		for(i=0;i<=6;i++)
		 if (strcmp(str,date[i])==0)
		  ans=i+1;
	    printf("%d\n",ans);
	}
}
