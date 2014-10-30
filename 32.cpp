#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct stud_node{
	int num;
	char name[20];
	int score;
	struct stud_node *next;
};
struct stud_node *Creat_Stu_Doc()
{
       struct stud_node *h,*t,*p;
       int i,j,k,num;
       int size = sizeof(struct stud_node);
	
	h=t=NULL;	
	scanf("%d", &num);
  	while(num != 0)
   {
	          p=(struct stud_node *)malloc(size);
	          p->num=num;
	          scanf("%s%d",p->name,&p->score);
	          p->next=NULL;
	          if (h==NULL) 
                 h=p;	
              else
                 t->next=p;
              t=p;
              scanf("%d",&num);
	}
	p=(struct stud_node *)malloc(size);
	p->next=h;
	h=p;
     return h;  
}
struct stud_node *DeleteDoc(struct stud_node *head,int min_score)
{
       struct stud_node *t,*p;
       t=head;
       p=head->next;
       for(; p!=NULL;t=p,p=p->next) 
       {
            if (p->score<min_score)
            {
                 t->next=p->next; 
                 p=t;
            }
       }
       return head;
}
void Ptrint_Stu_Doc(struct stud_node *head)
{
        struct stud_node *t,*p;
     	for(p=head->next; p!=NULL; p=p->next)  
		printf("%d %s %d\n", p->num,p->name,p->score);
}
int main()
{
	struct stud_node *head;
	int min_score;

	head=Creat_Stu_Doc();
	scanf("%d",&min_score);
	head=DeleteDoc(head,min_score);
	Ptrint_Stu_Doc(head);
}
