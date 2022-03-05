#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,sp=40;
	clrscr();

	for(i=5;i>=1;i--)
	{
		for(j=5;j<=sp;j++)
			printf(" ");
		for(j=5;j>=i;j--)
		{
			printf("%d",i);
		}
		printf("\n");
	       //	sp--;
	}
	getch();
}