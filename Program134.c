#include<stdio.h>
#include<stdbool.h>

int strlenX(char *str)
{
	int iCnt = 0;
	
	while(*str != '\0')
	{
		iCnt++;
		str++;
	}
	return iCnt;
}

int main()
{
	char Arr[10];
	int iRet = 0;

	printf("Please enter your full name\n");
	// scanf("%s",Arr);

	scanf("%[^'\n']s",Arr);
	
	iRet = strlenX(Arr);		// strlenX(100)

	printf("Number of character are %d\n",iRet);
	
	retrun 0;
}
