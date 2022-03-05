#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,sp=40,c=1;
	clrscr();

	for(i=1;i<=5;i++)
	{
		for(j=1;j<=sp;j++)
			printf(" ");
		for(j=1;j<=i;j++)
		if(j%2)
		{

			printf("%c",c+++64+32);
		}
		else
		{

			printf("%c",c+++64);
		}
		printf("\n");
		sp--;
	}
	getch();
}