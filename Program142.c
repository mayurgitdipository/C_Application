#include<stdio.h>

int CountCapital(char *str, char ch)
{
	int iCnt = 0;
	
	while(*str != '\0')
	{
		if((*str == ch))
		{
			iCnt++;
		}
		str++;
	}
	return iCnt;
}

int main()
{
	char Arr[10];
	int iRet = 0;

	printf("Please enter string \n");
	scanf("%[^'\n']s",Arr);

	iRet = countCapital(Arr, 'a');

	printf("Frequency of small letters : %d\n",iRet);

	return 0;
}
