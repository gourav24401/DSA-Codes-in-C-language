#include<stdio.h>
int linear_search(int a[],int n,int key);
void main()
{
	int i,n;
	int a[100];
	int key,res;
	printf("Enter the no of elements\n");
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the elements to be searched: ");
	scanf("%d",&key);
	res=linear_search(a,n,key);
	if(res==-1)
	{
		printf("Element not found");
	}
	else
	{
		printf("Element found at %d position",res+1);
	}
}

int linear_search(int a[],int n,int key)
{
	int i;
	for(i=0;i<=n;i++)
	{
		if(a[i]==key)
		return i;
	}
}
