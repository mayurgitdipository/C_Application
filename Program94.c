// 4
// 	1	*	2	*	3	*	4	*


#include<stdio.h>

void Display(int iNo)
{
	int iCnt = 0;

	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	for(iCnt = iNo ; iCnt >= 1 ; iCnt--)
	{
		printf("%d\t ",iCnt);		// Variable data
		printf("*\t");			// Fixed data
	}
	printf("\n");
}

int main()
{
	int iValue = 0;

	printf("Enter the number \n");
	scanf("%d",&iValue);

	Display(iValue);

	return 0;
}