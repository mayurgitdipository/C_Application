#include<stdio.h>

void strcypSmallX(char *src , char *dest)
{
	while(*src != '\0')
	{
		if((*src >= 'A') && (*src <= 'Z'))
		{
			*dest = *src + 32;
		}
		else
		{	
			*dest = *src;
		}

		src++;
		dest++;
	}
	*dest = '\0';
}

int main()
{
	char Arr[20];
	char Brr[20];

	printf("Plaese enter string \n");
	scanf("%[^'\n']s",Arr);

	
	strcpySmallX(Arr, Brr);

	printf("Original string is : %s\n",Arr);

	printf("Copied string  is : %s \n",Brr);

	return 0;

}