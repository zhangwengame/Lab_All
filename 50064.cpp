#include <stdio.h>
int main(void)
{
    long in, res,i;
    int ri, repeat,a[20],len=0;

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%ld", &in);
/*---------*/
        res=in; len=0; 
        if (res<0) res=-res;
        while (res)
        {
           len++;
           a[len]=res%10;
           res/=10;   
        } 
        if (in<0) printf("-");
        res=0;
        for (i=1;i<=len;i++)
        res=res*10+a[i];
        printf("%d\n",res);
    }
}
