#include<stdio.h>
#include<stdlib.h>

void DisplayReverse(int Arr[], int iSize)
{
	int i = 0;


	for(i = iSize-1; i >= 0 ; i--)
	{
		printf("%d\n",Arr[i]);
	}
	
}
		

int main()
{
	int *ptr = NULL;
	int iLength = 0,i = 0;

	printf("Enter the number of element :\n");
	scanf("%d",&iLength);

	ptr = (int *)malloc(iLength * sizeof(int));

	printf("Enter the elements :\n");

	for(i = 0; i < iLength ; i++)
	{
		scanf("%d",&ptr[i]);
	}

	
	printf("Elements in the reverse order : \n");
	DisplayRevers(ptr , iLength);


	
	free(ptr);

	return 0;
}