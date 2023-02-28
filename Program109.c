// Row 	4
// Column 	4
/*
	1	*	*	*	
	*	2	*	*
	*	*	3	*
	*	*	*	4

*/
	


#include<stdio.h>



void Display(int iRow ,int iCol)
{
	int i = 0, j = 0;

	if(iRow < 0)
	{
		iRow = -iRow;
	}
	
	if(iCol < 0)
	{
		iCol = -iCol;
	}

	for(i = 1 ;i< iRow ;i++)
	{
		for(j = 1; j < iCol ;j++)
		{
			if(j == i)
			{
				printf("$\t");
			}
			else
			{
				printf("%d\t",i);
			}
		}
		
		printf("\n");
	}


}

int main()
{
	int iValue1 = 0, iValue2 = 0;

	printf("Enter the number of Row  \n");
	scanf("%d",&iValue1);

	printf("Enter the number of Column  \n");
	scanf("%d",&iValue2);


	Display(iValue1, iValue2);

	return 0;
}