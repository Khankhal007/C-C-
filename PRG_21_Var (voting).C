#include<stdio.h>
#include<conio.h>
void main()
{
	int x;
	clrscr();
	printf("\n enter x value : ");
	scanf("%d",&x);

	if(x<18)
	{
		printf("\n\t person not available for vote");
	}
	else
	{
		printf("\n\t person available for vote");
	}
	getch();
}