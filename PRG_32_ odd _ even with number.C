#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	clrscr();

	for(i=1;i<=25;i++)
	{
		printf("\n odd %d",i*2-1);
		printf("\teven %d",i*2);
	}
	getch();
}