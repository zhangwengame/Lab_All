#include <stdio.h>
int main (void)
{  
    int i, index, j, n;
    struct address_list{
        char name[20];
        long birthday;
        char phone[20];
    }tmp, friends[10];

    scanf("%d", &n);
    for(i = 0; i < n; i++)
        scanf("%s%ld%s", friends[i].name, &friends[i].birthday, friends[i].phone);
/*---------*/
    for (i=0;i<n;i++)
     for (j=i+1;j<n;j++)
      if (friends[i].birthday>friends[j].birthday) 
       {
                                                   tmp=friends[i];friends[i]=friends[j]; friends[j]=tmp;
       }
        for(i = 0; i < n; i++)
            printf("%s %ld %s\n", friends[i].name, friends[i].birthday, friends[i].phone);
}
