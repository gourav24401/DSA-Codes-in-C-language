#include<stdio.h>
void swap(int *xp,int *yp);
void insertionsort(int arr[],int n);
void printarray(int arr[],int n);
int main()
{
	int arr[50];
	int n;
	int i;
	printf("Enter no of elements\n");
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	insertionsort(arr,n);
	printarray(arr,n);
	return 0;
}
void swap(int *xp,int *yp)
{
	int temp = *xp;
	*xp=*yp;
	*yp=temp;
}
void printarray(int arr[],int n)
{
	int i=0;
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
}
void insertionsort(int a[],int n)
{
	int i,j,key;
	for(i=1;i<n;i++)
	{
		key=a[i];
		j=i-1;
		while((j>=0)&&(a[j]>key))
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=key;
	}
}
