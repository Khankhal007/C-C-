#include<stdio.h>
#include<conio.h>
void main()
{
	int x=10;
	int *p;
	clrscr();
	printf("\n value of x : %d",x);
	printf("\n Address of x : %u",&x);
	p=&x;
	printf("\n value of x using p : %d",*p);
	printf("\n address of x using p : %u",p);
	printf("\n value of p : %u",&p);
	getch();
}