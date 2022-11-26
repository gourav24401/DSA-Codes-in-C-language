#include<stdio.h>
#include<stdlib.h>
struct node{
	struct mode * lpt;
	int info;
	struct node * rpt;
};
struct node * first;

void create()
{
	int ch;
	struct node *ptr;
	struct node *ptr1;
	ptr=(struct node *)malloc(sizeof(struct node));
	printf("Enter value of node\n");
	scanf("%d",&ptr->info);
	ptr->lpt=NULL;
	first=ptr;
	ptr->rpt=NULL;
	do
	{
		ptr1=(struct node *)malloc(sizeof(struct node));
		printf("Enter value of node\n");
		scanf("%d",&ptr1->info);
		ptr1->lpt=ptr;
		ptr->rpt=ptr1;
		ptr=ptr1;
		printf("enter 1 for more nodes and 0 for exit\n");
		scanf("%d",&ch);
	}
	while(ch==1);
	ptr->rpt=NULL;
	}
	void display()
	{
		struct node *ptr;
		ptr= first;
		while(ptr->rpt!=NULL)
		{
			printf("%d  ",ptr->info);
			ptr=ptr->rpt;
		}
		printf("%d ",ptr->info);
	}
void main()
{
	create();
	display();
}
