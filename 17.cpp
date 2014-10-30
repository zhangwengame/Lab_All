#include <stdio.h>
long fib(int n)
{
     long int a[3];
     int i,j,t;
     if (n==0) return 0;
     else if (n==1) return 1;     
     t=0;
     a[0]=0;
     a[1]=1;
     for (i=1;i<=n-1;i++)
      {
                         a[(t+2)%3]=a[t]+a[(t+1)%3];
                         t=(t+1)%3;
      }
     return a[(t+1)%3];
}
int main(void)
{
	int n,ri,repeat;

	scanf("%d",&repeat);
	for(ri=1;ri<=repeat;ri++){
		scanf("%d",&n);
		printf("fib(%d)=%ld\n",n,fib(n));
	}
}
