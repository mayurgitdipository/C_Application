#include<stdio.h>


int Multiplication(int iNo1 , iNo2)
{
	int iMult = 0;

	iMult = iNo1 * iNo2;
	
	return iMult;
}


int main()
{
	int iValue1 = 0 , iValue2 = 0;
	int iRet = 0;


	printf("Enter the first number :\n");
	scanf("%d",&iValue1);

	printf("Enter the second number :\n");
	scanf("%d",&iValue2);

	iRet = Multiplication(iValue1 , iValue2);

	
	printf("Multiplication is : \n %d\n", iRet);


	

	return 0;
}