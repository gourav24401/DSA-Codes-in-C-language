#include<stdio.h>
#include<stdlib.h>
int count=0;
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
	cou=leaf_node(root);
	printf("\nNo of leaf nodes = %d",cou);
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
int leaf_node(struct node *root)
{
	if(root==NULL)
	{
		return;
	}
	if((root->left==NULL)&&(root->right==NULL))
	{
		++count;
	}
	leaf_node(root->left);
	leaf_node(root->right);
	return count;
}
