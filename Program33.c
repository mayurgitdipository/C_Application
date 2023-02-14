#include<stdio.h>

int SumFacotrs(int iNo)
{
	int iCnt = 0, iSum = 0;

	for(iCnt = 1 ;iCnt <= (iNo / 2) ;iCnt++)
	{
		if((iNo % iCnt ) == 0)
		{
			iSum = iSum + iCnt;
		}
	}
	return iSum ;
}

int main()
{
	int iNo = 0;
	int iRet = 0;

	printf("Enter number :\n");
	scanf("%d",&iNo);


	iRet = SumFactors(iValue);

	printf("Summation of factors : %d\n",iRet);

	return 0;
}