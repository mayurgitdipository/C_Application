#include<stdio.h>

void DisplayReverse(int iNo)
{

	int iCnt = 0;
	printf("-----------------------------------------------------\n");

	for(iCnt = iNo ; iCnt  >= 0 ; iCnt--)
	{
		printf("%d \t",iCnt);
	}
	
	printf("-----------------------------------------------------\n");

}




int main()
{
	int iValue = 0;
	
	printf("Enter number :\n");
	scanf("%d",&iValue);


	DisplayRevese(iValue);

	return 0;
}
