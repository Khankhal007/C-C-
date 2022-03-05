#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();

	for(i=5;i>=1;i-=1)
	{
		for(j=5;j>=i;j-=1)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	getch();
}