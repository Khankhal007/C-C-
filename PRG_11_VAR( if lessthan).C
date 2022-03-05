//conditional statement
//if-else
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();
	printf("\n enter a :",a);
	scanf("%d",&a);
	printf("\n enter b :",b);
	scanf("%d",&b);

	if(a<b)
	{
		printf("\n\t b is largest");
	}
	else
	{
		printf("\n\t a is largest");
	}
	getch();
}
