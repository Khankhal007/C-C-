#include<stdio.h>
#include<conio.h>
int myhome(int x)
{
	return x+2;
}
void main()
{
	int n=5;
	clrscr();
	printf("\n before myhome");
       printf("\n\t myhome return : %d",myhome(n));
	printf("\n after home");
	getch();
}
