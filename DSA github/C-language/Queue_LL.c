#include<stdio.h>
#include<stdlib.h>
struct node{
	int info;
	struct node *link;
};
struct node *rear;
struct node *front;

void enque(int data)
{
	rear->link=front->link=NULL;
	struct node *ptr;
	ptr=(struct node *)malloc(sizeof(struct node));
	ptr->link=ptr;
	ptr->info=data;
	if(front==NULL&&rear==NULL)
	{
		rear=ptr;
		front=ptr;
	}
	else
	{
		rear->link=ptr;
		rear=ptr;
		rear->link=front;
	}
	}
void deque()
{
	struct node * temp=front;
	if(front==NULL&&rear==NULL)
	{
		printf("No elements in queue");
	}
	else if(front==rear)
	{
		front=NULL;
		rear=NULL;
		free(temp);
	}
	else{
		front=front->link;
		rear->link=front;
		free(temp);
	}
}
void display()
{
	struct node * temp=front;
	while(temp!=rear)
	{
		printf("%d",temp->info);
		temp=temp->link;
	}	
	printf("%d",temp->info);
}
void main()
{
	enque(1);
	enque(2);
	enque(3);
	enque(4);
	enque(5);
	enque(6);
	enque(7);
	enque(8);
	enque(9);
	display();
	deque();
	deque();
	display();
}
