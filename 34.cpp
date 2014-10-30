#include<stdio.h>
#include<stdlib.h>
struct stud_node{
	int num;
	struct stud_node *next;
};
struct stud_node *Creat_Stu_Doc();
struct stud_node *DeleteDoc(struct stud_node *head);
void Ptrint_Stu_Doc(struct stud_node *head);
int main()
{
	struct stud_node *head;

	head=Creat_Stu_Doc();
	head=DeleteDoc(head);
	Ptrint_Stu_Doc(head);
}
struct stud_node *Creat_Stu_Doc()
{
	struct stud_node *head,*tail,*p;
	int num;
	int size=sizeof(struct stud_node);

	head=tail=NULL;
	scanf("%d",&num);
	while(num!=-1){
		p=(struct stud_node *)malloc(size);
		p->num=num;
		p->next=NULL;
		if(head==NULL)
			head=p;
		else
			tail->next=p;
		tail=p;
		scanf("%d",&num);
	}
	p=(struct stud_node *)malloc(size);
	p->next=head;
	head=p;
	return head;
}
void Ptrint_Stu_Doc(struct stud_node *head)
{
	struct stud_node *ptr;
	if((head->next)==NULL){
		printf("No Records\n");
		return;
	}
	for(ptr=head->next;ptr;ptr=ptr->next)
		printf("%d ",ptr->num);
	printf("\n");
}
struct stud_node *DeleteDoc(struct stud_node *head)
{
        struct stud_node *t,*p;
        t=head;
        p=head->next;
        for(; p!=NULL;t=p,p=p->next) 
        {
           if ((p->num%2)==0)
            {
                 t->next=p->next; 
                 p=t;
            }
        }
        return head;
}
