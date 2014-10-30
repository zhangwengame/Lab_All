#include <stdio.h>
void mov(int *x, int n, int m);
int main(void)
{
    int i, m, n;
    int a[80];

    scanf("%d%d", &n, &m);
    for(i = 1; i <= n; i++)
        scanf("%d", &a[i]);
/*---------*/
    m=m%n;
    
    printf("After move: ");
    for (i=n-m+1;i<=n;i++)
    printf("%d ", a[i]);
    for(i = 1; i <= n-m; i++)
         printf("%d ", a[i]);
    printf("\n"); 
}
