#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct stud_node{
	int num;
	struct stud_node *next;
};
int size= sizeof(struct stud_node);

struct stud_node *Creat_Stu_Doc()
{
       struct stud_node *h,*t,*p;
       int num;
       h=t=NULL;
       scanf("%d",&num);
       while (num!=-1)
       {
             p=(struct stud_node *)malloc(size);
             p->num=num;
             p->next=NULL;
             if (t==NULL)
              t=p;
             else
              p->next=t;
             t=p;
             scanf("%d",&num);
       }
       return t;
}
void Ptrint_Stu_Doc(struct stud_node *head);
int main()
{
	struct stud_node *head;

	head=Creat_Stu_Doc();
	Ptrint_Stu_Doc(head);
}
/*---------*/
void Ptrint_Stu_Doc(struct stud_node *head)
{
	struct stud_node *ptr;
	if(head==NULL){
		printf("No Records\n");
		return;
	}
	for(ptr=head;ptr;ptr=ptr->next)
		printf("%d ",ptr->num);
	printf("\n");
}
