// Row 	4
// Columna 	4
/*
	*	*	*	*
	*	*	*	*
	*	*	*	*
	*	*	*	*
*/
	


#include<stdio.h>

//ASCII
//American Standard code for Information Interchange


void Display(int iRow ,int iCol)
{
	
	int i = 0 , j = 0;
	
	for(i = 1 ; i <= iRow ; i++)
	{
		for(j = 1 ;j <= iCol ; j++)
		{
			printf("*\t");
		}
		print("\n");
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