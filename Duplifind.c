#include <stdio.h>

int main()
{
	int l,i,j;
	printf("ENTER SIZE OF ARRAY: \n");
	scanf("%d", &l);
	int inp[l];
	int uniq[l];
	for(i=0;i<l;i++)
	{
		printf("\nENTER ARRAY ELEMENT: ");
		scanf("%d", &inp[i]);
		
	
	}
	int k=-1,count=0;
	for(i=0;i<l;i++)
	{
		int flag = 0;
		for(j=0;j<=k;j++)
		{
			if(inp[i]==uniq[j])
			{
				flag=-1;break;
			}
			
		}
		if(flag==-1)
		count++;
		else
		uniq[++k]=inp[i];
	}
}
	

