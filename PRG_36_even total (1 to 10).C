#include<stdio.h>
#include<conio.h>
void main()
{
	int i,a=0;
	clrscr();

	for(i=0;i<=10;i=i+2)
	{
		a+=i;
	}
	printf("\n total : %d",a);
	getch();
}