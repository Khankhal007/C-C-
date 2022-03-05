#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	clrscr();

	i=1;
	while(i<=26)
	{
		printf("\t%c",i+64+32);
		i++;
	}
	getch();
}