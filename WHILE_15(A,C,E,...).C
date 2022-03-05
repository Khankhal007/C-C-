#include<stdio.h>
#include<conio.h>
void main()
{
	int i,b=2;
	clrscr();

	i=1;
	while(i<=10)
	{
		printf("\t %c",i+64);
		i=b+i;
	}
	getch();
}