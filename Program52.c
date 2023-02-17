#include<stdio.h>

int SumDigits(int iNo)
{
	int iDigit = 0, iSum = 0;
	
	if(iNo == 0)
	{
		return 1 ;
	}
	
	if(iNo < 0 )
	{
		iNo = -iNo;
	}

	while(iNo != 0)
	{
		iDigit = iNo % 10 ;
		iNo = iNo / 10;
		iSum = iDigit + iSum ;
		
	}
	
	return iSum ;
}



int main()
{
	int iValue = 0;
	int iRet = 0;


	printf("Please enter number :\n");
	scanf("%d",&iValue);


	iRet = SumDigits(iValue);

	printf("Summation of digits is %d :\n",iRet);

	return 0;
}