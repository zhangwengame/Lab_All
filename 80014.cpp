#include<stdio.h>
int main(void)
{
    int count, i, m, n, no;
    int num[200];
    int p;

    scanf("%d%d", &n, &m);
    for(i = 0; i < n; i++)
        num[i] = i + 1;
    num[i]=-1;
    i = 0; no=1; m=m%n;
    while (no<n)
    {
    count=0;
    for (;count<m-1;i=(i+1)%n)
    {
        if (num[i]>0) count++;
    }
    for (;num[i]==0;i=(i+1)%n);
    printf("No%d: %d\n", no, num[i]); no++;
    num[i]=0;
    for (;num[i]==0;i=(i+1)%n);
    }
/*---------*/
    for (i=0;i<n;i++)
    if (num[i]!=0) break;
    printf("Last No is: %d\n", num[i]);
    while(1);
}
