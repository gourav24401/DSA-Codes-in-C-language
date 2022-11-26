#include<stdio.h>
void main()
{
	int i,n;
	int a[100];
	int key,low,high,mid,result;
	printf("Enter the no of elements\n");
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the elements to be searched: ");
	scanf("%d",&key);
	low=0;
	high=n-1;
	result=BS(a,key,low,high);
	if(result==-1)
	printf("Item not found\n");
	else
	printf("%d found at %d index",key,result);
}
int BS(int a[],int key,int low,int high)
{
	int mid;
	if(low<=high)
	{
	mid = low+(high-low)/2;
	if(a[mid]==key)
	{
		return mid+1;
	}
	else if(a[mid]<key)
	{
		BS(a,key,mid+1,high);
	}
	else if(a[mid]>key)
	{
		BS(a,key,low,mid-1);
	}
	else
	return -1;
}
}
	
