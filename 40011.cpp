#include <stdio.h>
int gcd1(int a,int b)
{
    if (b==0) return a;
    else return gcd1(b,a%b);
}
int main(void)
{
    int gcd, lcm, m, n;  
    int repeat, ri;  

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d", &m);
        scanf("%d", &n);
        if(m <= 0 || n <= 0)
            printf("m <= 0 or n <= 0");
        else{
/*---------*/
            gcd=gcd1(m,n);
            lcm=m/gcd*n; 
            printf("%d is the least common multiple of %d and %d, %d is the greatest common divisor of %d and %d.\n", lcm, m, n, gcd, m, n);
        }
    }
}
