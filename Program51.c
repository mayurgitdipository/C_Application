#include<stdio.h>

int iCountDigit(int iNo)
{
	
	int iCnt = 0;

	if(iNo == 0)	// Filter
	{
		return 1;
	}

	if(iNo < 0 )	// Updater
	{
		iNo = -iNo;
	}


	while(iNo > 0)
	{
		
		iNo = iNo / 10;
		iCnt++;
	}


	return iCnt;
}

int main()
{
	int iValue = 0;
	
	printf("Enter number :\n");
	scanf("%d",&iValue);


	iRet = CountDigits(iValue);
	
	printf("Number of digits are : %d\n",iRet);
	
	return 0;
}
