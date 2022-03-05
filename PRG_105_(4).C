#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,sp=40;
	clrscr();

	for(i=5;i>=0;i-=1)
	{
		for(j=1;j<=sp;j++)
			printf(" ");
		for(j=5;j>i*2;j-=1)
		{
			printf("%d",j);
		}
		printf("\n");
		sp--;
	}
	getch();
}
