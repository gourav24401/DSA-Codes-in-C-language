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
void bubblesort()
{
int i,j,flag;
struct node *ptr1;
struct node *lptr=NULL;
if(first==NULL)
{
	return;
}
do
{
	flag=0;
	ptr1=first;
	while(ptr1->link!=lptr){
		if((ptr1->info)>(ptr1->link->info))
		{
			swap(ptr1,ptr1->link);
			flag=1;
		}
		ptr1=ptr1->link;
	}
	lptr=ptr1;
}
while(flag);
}
void swap(struct node *a,struct node *b)
{
	int temp=a->info;
	a->info=b->info;
	b->info=temp;
}
void main()
{
	create();
	printf("Original Linked list\n");
	display();
	printf("\nSorted Linked list\n");
	bubblesort();
	display();
}
