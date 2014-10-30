#include <stdio.h>
int main(void)
{
    int i, mark, n;
    int na, nb, nc, nd, ne;
	
    scanf("%d",&n);
    na = nb = nc = nd = ne = 0;
    for(i = 1; i <= n; i++){
        scanf("%d", &mark);
        if (mark>=90&&mark<=100) na++;
        if (mark>=80&&mark<=89) nb++;
        if (mark>=70&&mark<=79) nc++;
        if (mark>=60&&mark<=69) nd++;
        if (mark>=0&&mark<=59) ne++;
/*---------*/
    }
    printf("Number of A(90-100): %d\n", na);
    printf("Number of B(80-89): %d\n", nb);
    printf("Number of C(70-79): %d\n", nc);
    printf("Number of D(60-69): %d\n", nd);
    printf("Number of E(0-59): %d\n", ne);
}
