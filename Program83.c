#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[], int iSize)
{
	int i = 0;
	int iMin = 0;

	for(i = 0; i < iSize ; i++)
	{
		if(Arr[i] < iMin)
		{
			iMin = Arr[i];
		}
	}
	return iMin;
}
		

int main()
{
	int *ptr = NULL;
	int iLength = 0,i = 0, iValue = 0, iRet = 0;

	printf("Enter the number of element :\n");
	scanf("%d",&iLength);

	ptr = (int *)malloc(iLength * sizeof(int));

	printf("Enter the elements :\n");

	for(i = 0; i < iLength ; i++)
	{
		scanf("%d",&ptr[i]);
	}

	printf("Enter the number you want to find \n");
	scanf("%d",&iValue);

	iRet  = Minimum(ptr , iLength);

	printf("Minimum number is : %d\n",iRet);

	
	free(ptr);

	return 0;
}