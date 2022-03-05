#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{

	char str1[5],str2[5];
	clrscr();
	printf("\n enter string :");
	gets(str1);
	strcpy(str2,str1);
	strrev(str1);
	if(strcmpi(str1,str2))
	{
		printf("\n string is not palindrom");
	}
	else
	{
		printf("\n string is palindrom");
	}
	getch();
}

