#include<stdio.h>
void swap(int *xp,int *yp);
void bubblesort(int arr[],int n);
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
	bubblesort(arr,n);
	printarray(arr,n);
	return 0;
}
void bubblesort(int arr[],int n)
{
	int i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				swap(&arr[j],&arr[j+1]);
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
