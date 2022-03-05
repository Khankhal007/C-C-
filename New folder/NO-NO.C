#include<stdio.h>
#include<conio.h>
void pattern()
{
	int i,j,sp=40;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=sp;j++)
			printf(" ");
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
void main()
{
	clrscr();
	pattern();
	getch();
}

