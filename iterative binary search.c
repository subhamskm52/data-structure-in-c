#include<stdio.h>
#include<stdlib.h>


int binarysearch(int arr[],int size)
{
	int element;
	int start;
	int end;
	int mid;
	printf("enter element to search\n");
	scanf("%d",&element);
	
	start=0;
	end=size;
	
	do
	{		
		mid=(start+end)/2;
		if(arr[mid]==element)
		{
			return mid;
		}
		if(arr[mid]<element)
			start=mid+1;
		if(arr[mid]>element)
			end=mid-1;
	}
   	while(start!=end);
	
	return -1;
}

int main()
{
	int arr[50];
	int size,i;
	int index;
	printf("enter the size of array\n");
	scanf("%d",&size);
	
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	index=binarysearch(arr,size);
	
	printf("%d",index);
	return 0;
}
