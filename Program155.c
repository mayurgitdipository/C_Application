#include<stdio.h>

void strcypX(char *src , char *dest)
{
	while(*src != '\0')
	{
		*dest = *src;

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

	
	strcpyX(Arr, Brr);

	printf("Copied string  is : %s \n",Brr);

	return 0;

}