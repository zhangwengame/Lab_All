#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct stud_node{
     int    num;
     char  name[20];
     int    score;
     struct stud_node *next;
};
int main()
{
	struct stud_node *head,*tail, *p;
	int num, score;
	char name[20];
	int size = sizeof(struct stud_node);
	
	head=tail=NULL;	
	scanf("%d", &num);
  	while(num != 0)
   {
	          p=(struct stud_node *)malloc(size);
	          p->num=num;
	          scanf("%s%d",p->name,&p->score);
	          p->next=NULL;
	          if (head==NULL) 
                 head=p;	
              else
                  tail->next=p;
              tail=p;
              scanf("%d",&num);
	}
    
	for(p=head; p!=NULL; p=p->next)  
		printf("%d %s %d\n", p->num,p->name,p->score);
}
