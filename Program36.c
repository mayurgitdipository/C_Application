#include<stdio.h>

void DisplayNonFactors(int iNo)
{
	int iCnt = 0; 
	
	for(iCnt = 1 ;iCnt < iNo ; iCnt++)
	{
		if((iNo % iCnt ) != 0)
		{
			printf("%d\t",iCnt);
		}
	}
}


int main()
{
	int iValue = 0;

	
	printf("Enter number :\n");
	scanf("%d",&iValue);
	

	DisplayNonFactors(iValue);

	return 0 ;

}
