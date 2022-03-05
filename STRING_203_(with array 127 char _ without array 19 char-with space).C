#include<stdio.h>
#include<conio.h>
void main()
{
	char name;
	clrscr();
	printf("\n Enter your name : ");
	scanf("%s[^\n]",name);
	printf("\n Hi, %s welcome to \n\t skill Qode....",name);
	getch();
}
