//conditional statement
//if-else
#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();
	printf("\n enter a:");
	scanf("%d",&a);
	if(a%3)
	{
		printf("\n\t a not divisable 3");
	}
	else
	{
		printf("\n\t a divisable 3");
	}
	getch();
}
