#include<stdio.h>
#include<conio.h>
int myhome()
{
	int x=10;
	printf("\n\t inside home ");
	return x+2;
}
void main()
{
	clrscr();
	printf("\n before home");
       printf("\n myhome return : %d",myhome());
	printf("\n after home");
	getch();
}
