#include<stdio.h>
#include<conio.h>
void main ()
{
	char ch;
	clrscr();
	printf("\n enter ch :");
	scanf("%c",&ch);

	if(ch>=65 && ch<=90)
	{
		printf("\n\t %c",ch+32);
	}
	else
	{
		printf("\n\t %c",ch-32);
	}
	getch();

}