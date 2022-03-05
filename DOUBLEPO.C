#include<stdio.h>
#include<conio.h>
void main()
{
	int x=30;
	int *p,**p2;
	clrscr();
	p=&x;
	printf("\n value of x : %d",x);
	printf("\n Address of x : %u",&x);

	/* Pointer */
	printf("\n\n Address of p : %u",&p);
	printf("\n value of x using p : %d",*p);
	printf("\n Address of x using p : %u",p);

	/* Double Pointer */
	p2=&p;

	printf("\n\n Address of **p2 : %u",&p2);
	printf("\n Address of p using p2 : %u",p2);
	printf("\n Address of x using p2 : %u",*p2);
	printf("\n value of x using p2 : %d",**p2);
	getch();
}

