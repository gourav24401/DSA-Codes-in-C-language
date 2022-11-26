#include<stdio.h>
void main()
{
	int i,n;
	int a[100];
	int key,low,high,mid;
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
	while(low<=high)
	{
		mid=(low+high)/2;
		if(a[mid]<key)
		{
			low=mid+1;
		}
		else if(a[mid]>key)
		{
			high=mid-1;
		}
		else if(a[mid]==key)
		{
			printf("%d found at index %d",key,mid+1);
			break;
		}
		else
		{
			printf("search unsucessfull");
			break;
		}
	}
}

