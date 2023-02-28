/*
	Row = 4
	Col = 4

	*
	*	*
	*	*	*
	*	*	*	*
*/

#include<stdio.h>


void DisplayPattern(int iRow , int iCol)
{	
	int i = 0, j = 0;

	if(iRow != iCol)
	{
		return;
	}

	for(i = 1 ; i <= iRow , i++)
	{
		for(j = 1 ; j <= i , j++)
		{
			{
				printf("*\t");
			}
		}
		printf("\n");
	}
}

int main()
{
	int iValue1 = 0 , iValue2 = 0;

	printf("Enter the number of row :\n");
	scanf("%d",&iValue1);

	printf("Enter the number of Column :\n");
	scanf("%d",&iValue2);

	DisplayPattern(iValue1, iValue2);

	return 0;
}