#include<stdio.h>
#include<stdlib.h>
struct node{
	int info;
	struct node *link;
};
struct node *first;

void create()
{
	int ch;
	struct node *ptr,*cpt;
	ptr=(struct node *)malloc(sizeof(struct node));
	printf("Enter value of node\n");
	scanf("%d",&ptr->info);
	ptr->link=NULL;
	first=ptr;
	do
	{
		cpt=(struct node *)malloc(sizeof(struct node));
		printf("Enter value of node\n");
		scanf("%d",&cpt->info);
		ptr->link=cpt;
		ptr=cpt;
		printf("Press '1' for more nodes & '0' for exit :");
		scanf("%d",&ch);
	}
	while(ch==1);
	ptr->link=NULL;
}
void display()
{
	struct node *ptr;
	ptr=first;
	while(ptr!=NULL)
	{
		printf("%d\t",ptr->info);
		ptr=ptr->link;
	}
}
void main()
{
	create();
	display();
}
