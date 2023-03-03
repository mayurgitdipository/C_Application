#include<stdio.h>
#include<stdbool.h>

int countFrequency(char *str, char ch)
{
	
	while(*str != '\0')
	{
		if((*str == ch))
		{
			
			break;
		}
		str++;
	}
	if(*str == '\0')
	{
		return false;
	}
	else
	{
		return ture;
	}	
}

int main()
{
	char Arr[10];
	char cValue = '\0';
	bool bRet = 0;

	printf("Please enter string \n");
	scanf("%[^'\n']s",Arr);

	printf("Please enter the character\n");
	scanf("%c",&cValue);

	bRet = Check(Arr, cValue);

	if(bRet == true)
	{
		printf("Character is present in the string \n");
	}
	else
	{
		printf("Character is not present in the string \n");
	}
	return 0;
}
