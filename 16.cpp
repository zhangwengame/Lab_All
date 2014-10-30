#include <stdio.h>
  void dectobin(int n)
  {
       int a[20],len,i;
       len=0;
       while (n)
       {
             len++; a[len]=n%2; n=n/2;
       }
       for (i=len;i>=1;i--) printf("%d",a[i]);
       if (len==0) printf("0");
  }
int main(void)
{
  int ri,repeat;
  int i,n;


  scanf("%d",&repeat);
  for(ri=1;ri<=repeat;ri++){
    scanf("%d",&n);
    dectobin(n);
    printf("\n");
  }
}
