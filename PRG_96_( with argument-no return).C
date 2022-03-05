#include<stdio.h>
#include<conio.h>
void myhome(int x)
{
	printf("\n\t inside home %d",x*2);
}
void main()
{
	clrscr();
	printf("\n before home");
	myhome(10);
	printf("\n after home");
	getch();
}
