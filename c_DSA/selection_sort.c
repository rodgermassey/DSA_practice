#include <stdio.h>

int selection_sort(int arr[], int size)
{
	int smallest,s_index,swap;
	for(int i=0; i<size; i++)
	{
		smallest = arr[i];
		s_index=i;
		
		for(int j=i+1; j<size; j++)
		{
			if(smallest > arr[j])
			{
				smallest = arr[j];
				s_index = j;
			}
		}
		swap=arr[i];
		arr[i]=smallest;
		arr[s_index]=swap;
	}
	printf("the sorted array is :--\n");
	for(int i=0; i<size; i++)
	{
		printf("element no. %d of sorted array: %d\n",i+1,arr[i]);

	}
}

int main()
{	
	int size;
	printf("enter the size of the array: ");
	scanf("%d",&size);

	int arr[size];

	printf("enter the elements in the array: \n");
	for(int i=0; i<size; i++)
	{
		printf("enter element no. %d in the array",i+1);
		scanf("%d",&arr[i]);
	}

	selection_sort(arr,size);
}
