#include<stdio.h>
void swap(int *xp,int *yp);
void QS(int arr[],int start,int end);
int part(int arr[],int lb, int ub);
void printarray(int arr[],int n);
int main()
{
	int arr[50];
	int n=0;
	int i;
   printf("Enter number of elements\n");
   scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter %d element\n",i+1);
		scanf("%d",&arr[i]);
	}
	QS(arr,0,n-1);
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
		printf("%d ",arr[i]);
	}
}
void QS(int arr[],int start,int end)
{
	int loc;
	if(start<end)
	{
	loc=part(arr,start,end);
	QS(arr,start,loc-1);
	QS(arr,loc+1,end);	
	}
}
int part(int arr[],int lb,int ub)
{
	int start;
	int end;
	int *pivat;
	pivat=&arr[lb];
	start=lb;
	end=ub;
	while(start<end)
	{
		if(arr[start]<*pivat)
		{
			start++;
		}
		else if(arr[end]>*pivat)
		end--;
		else if(start<end)
		swap(&arr[end],pivat);
	}
	swap(&arr[end],pivat);
	return end;
}
