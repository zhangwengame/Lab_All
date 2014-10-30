#include <stdio.h>
int fun(int in)
{
        int res,i;
        int a[20],len=0;
        res=in; len=0; 
        if (res<0) res=-res;
        while (res)
        {
           len++;
           a[len]=res%10;
           res/=10;   
        } 
        
        res=0;
        for (i=1;i<=len;i++)
        res=res*10+a[i];
        if (in<0) res=-res;
        return res;
}
int main(void)
{	
    int m1,m2;

    scanf("%d%d", &m1, &m2);
    printf("%d的逆向是%d\n", m1, fun(m1));  
    printf("%d的逆向是%d\n", m2, fun(m2));  

}
