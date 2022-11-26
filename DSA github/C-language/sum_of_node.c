#include<stdio.h>
#include<stdlib.h>
int count;
struct node
{
	int data;
	struct node *left;
	struct node *right;
};

struct node *ptr,*root,*list;
struct node *create_node();

void display(struct node *);
void construct();

void main()
{
	int cou;
	construct();
	display(root);
	cou=sum(root);
	printf("\nsum of nodes = %d",cou);
}

void construct()
{
	root=create_node();
	root->data=50;
	root->left=create_node();
	root->left->data=20;
	root->right=create_node();
	root->right->data=30;
	root->left->left=create_node();
	root->left->left->data=70;
	root->left->right=create_node();
	root->left->right->data=80;
}
struct node *create_node()
{
	ptr=(struct node*)malloc(sizeof(struct node));
	ptr->left=NULL;
	ptr->right=NULL;
	return ptr;
}

void display(struct node *list)
{
	if(list!=NULL)
	{
		display(list->left);
		printf("%d\t",list->data);
		display(list->right);
	}
}
int sum(struct node *root)
{
	int original;
	if(root==NULL)
	{
		return 0;
	}
	original=root->data;
	root->data=sum(root->left)+sum(root->right);
	return original+root->data;
}
