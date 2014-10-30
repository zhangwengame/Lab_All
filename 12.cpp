#include <stdio.h>
#include <math.h>
#include<string.h>
int search(int n)
{
    int i,j,k,sum,flag[10];
    
    sum=0;
    for (i=101;i<=n;i++)
    {
        j=(int)sqrt(i);
        if (j*j==i)
         {
           memset(flag,0,sizeof(flag));
           k=i;
           while (k)
            {
                 flag[k%10]++;
                 k/=10;
            }        
           for (k=0;k<=9;k++)
           if (flag[k]==2)
            sum++;
         }
    }
    return sum;
}
int main(void)
{
	int number,ri,repeat;

	scanf("%d",&repeat);
	for(ri=1;ri<=repeat;ri++){	
	    scanf("%d",&number);
		printf("count=%d\n",search(number));
	}
}
