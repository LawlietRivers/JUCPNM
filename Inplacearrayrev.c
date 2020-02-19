#include <stdio.h>
int main()
{
	int l;
	printf("ENTER SIZE OF ARRAY:\n");
	scanf("%d",&l);
	int i=0;
	int arr[l];
	for(i=0;i<l;i++)
	{
		printf("ENTER ARRAY ELEMENT: ");
		scanf("%d",&arr[i]);
	}
	printf("\n");
	for(i=0;i<l/2;i++)
	{
		int t = arr[i];
		arr[i]	=arr[l-1-i];
		arr[l-1-i]=t;
	}
	for(i=0;i<l;i++)
	printf("%d ",arr[i]);
		
	return 0;
}
