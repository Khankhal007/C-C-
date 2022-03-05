#include<stdio.h>
#include<conio.h>
void main()
{
	int i,b=2,c;
	clrscr();

	i=1;
	while(i<=26)
	{
		printf("\t %c",i+64);
		i=i+b;
		printf("\t %c",i+64+32);
		i=i+b;
	}
	getch();
}