#include <stdio.h>

       
void reverse(int n)

{
       int a[20],len,i;
       len=0;
       while (n)
       {
             len++; a[len]=n%10; n=n/10;
       }
       for (i=1;i<=len;i++) printf("%d",a[i]);
}

int main(void)
{
	int n,ri,repeat;

	scanf("%d",&repeat);
	for(ri=1;ri<=repeat;ri++){
		scanf("%d",&n);
		reverse(n);
		printf("\n");
	}
}
