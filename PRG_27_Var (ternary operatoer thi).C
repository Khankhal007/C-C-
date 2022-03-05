#include<stdio.h>
#include<conio.h>
void main()
{
	int A,B;
	clrscr();
	printf("\n enter is A value : ");
	scanf("%d",&A);
	printf("\n enter is B value : ");
	scanf("%d",&B);
	A>B?printf("\n A is greater=%d"):printf("\n B is greater=%d");
	getch();
}