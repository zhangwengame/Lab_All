#include<stdio.h>
#include<stdlib.h>
struct stud_node{
	int num;
	struct stud_node *next;
};
struct stud_node *Creat_Stu_Doc();
void Ptrint_Stu_Doc(struct stud_node *head);
struct stud_node *InserDoc(struct stud_node *list1,struct stud_node *list2);
int main()
{
	struct stud_node  *list1,*list2;

	list1=Creat_Stu_Doc();
	list2=Creat_Stu_Doc();
	list1=InserDoc(list1,list2);
	Ptrint_Stu_Doc(list1);
}
struct stud_node *InserDoc(struct stud_node *list1,struct stud_node *list2)
{
    struct stud_node *h,*p1,*p2,*t,*p;
    int size=sizeof(struct stud_node);
    int i,j,k;
    
    h=t=NULL;
    for (p1=list1,p2=list2;(p1!=NULL)&&(p2!=NULL);)
    {
        if ((p1->num)<(p2->num))
        {
           p=p1; 
           p1=p1->next;
        }
        else
        {
            p=p2;
            p2=p2->next;
        }
        if (h==NULL)
           h=p;
        else
           t->next=p;
        t=p;        
    }
    if (p1!=NULL) t->next=p1;
    if (p2!=NULL) t->next=p2;
    return h;
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
	return head;
}
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
