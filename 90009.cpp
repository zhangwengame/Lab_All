#include <stdio.h>
int main (void)
{  
    int i, j, k, max_index, n;
    struct student{
        int number;
        char name[20];
        int score[3];
        int sum;
    }stu[10];

    scanf("%d", &n);
    for (i=1;i<=n;i++)
    {
	 	scanf("%d%s%d%d%d",&stu[i].number,&stu[i].name,&stu[i].score[1],&stu[i].score[2],&stu[i].score[3]);
	 	getchar();
	 	stu[i].sum=stu[i].score[1]+stu[i].score[2]+stu[i].score[3];
   }
   max_index=1;
   for (i=1;i<=n;i++)
   if (stu[i].sum>stu[max_index].sum)
   max_index=i;
/*---------*/
    printf("�ܷ���ߵ�ѧ����: %s��%d��\n", stu[max_index].name, stu[max_index].sum);
}
