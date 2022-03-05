#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();
	printf("\n enter a =");
	scanf("%d",&a);
	printf("\n enter b =");
	scanf("%d",&b);
	a=a*b;
	b=a/b;
	a=a/b;
	printf("\n a =%d\n b =%d",a,b);
	getch();
}