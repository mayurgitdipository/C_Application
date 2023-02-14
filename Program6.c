#include<stdio.h>




int main()
{
	int iValue1 = 0 , iValue2 = 0;
	int iMult = 0;


	printf("Enter the first number :\n");
	scanf("%d",&iValue1);

	printf("Enter the second number :\n");
	scanf("%d",&iValue2);

	iMult = iValue1 * iValue2;

	printf("Multiplication is : \n %d\n", iMult);


	

	return 0;
}