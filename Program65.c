#include<stdio.h>

{
	int iDigit = 0;
	int iMax = 0;

	if(iNo < 0 )
	{
		iNo = -iNo;
	}

	while(iNo != 0)
	{
		iDigit = iNo % 10;
		if(iDigit > iMaX)
		{
			iMax = iDigit;
		}
	
		if(iMax == 9)
		{
			break;
		}

		iNo = iNo / 10;
	}

	return iMax;
}

int main()
{
	int iValue = 0;

	printf("Please enter number :\n");
	scanf("%d",&iValue);
	
	iRet = MaxDigit(iValue);

	printf("Largest digit is : %d\n",iRet);

	return 0;
}
