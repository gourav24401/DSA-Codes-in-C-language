#include<stdio.h>
void swap(int *xp,int *yp);
void selection_sort(int arr[],int n);
void printarray(int arr[],int n);
void main()
{
	int i,j,n,arr[50];
	printf("Enter no of elements\n");
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	selection_sort(arr,n);
	printarray(arr,n);
}
void selection_sort(int arr[],int n)
{
	int i=0;
for(i=0;i<n;i++)
{
    int j;
	for(j=i+1;j<=n-1;j++)
	{
		if(arr[i]>arr[j])
		{
			swap(&arr[i],&arr[j]);
		}
	}
}	
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

