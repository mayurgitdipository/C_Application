#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int LastOccurance(int Arr[], int iSize, int iNo)
{
	int i = 0 , iPos = -1;


	for(i = 0; i < iSize ; i++)
	{
		if((Arr[i]) == iNo)
		{
			iPos = i;
		}
	}
	return iPos;
}
		

int main()
{
	int *ptr = NULL;
	int iLength = 0,i = 0 , iValue = 0, iRet = 0;

	printf("Enter the number of element :\n");
	scanf("%d",&iLength);

	ptr = (int *)malloc(iLength * sizeof(int));

	printf("Enter the elements :\n");

	for(i = 0; i < iLength ; i++)
	{
		scanf("%d",&ptr[i]);
	}
	
	printf("Enter the number you want to check \n");
	scanf("%d",&iValue);

	
	
	iRet = LastOccurance(ptr , iLength, iValue);

	if(iRet == -1)
	{
		printf("There is no %d in the array \n",iValue);
	}
	else
	{
		printf("%d is occured in the array at last index %d \n",iValue,iRet );
	}

	free(ptr);

	return 0;
}