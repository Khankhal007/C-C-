#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,sp=40;
	clrscr();

	for(i=5;i>=1;i--)
	{
	       //	for(j=1;j<=sp;j++)
	       //		printf(" ");
		for(j=i;j<=5;j++)
		{

			printf("%d",j);
		}
		printf("\n");
		//sp--;
	}
	getch();
}
