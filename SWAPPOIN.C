#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	int *c,*h;
	clrscr();
	printf("\n enter a :");
	scanf("%d",&a);
	printf("\n enter b :");
	scanf("%d",&b);

	c=&a;
	h=&b;

	a=*c * *h;
	b=*c / *h;
	a=*c / *h;
	printf("\n a : %d",a);
	printf("\n b : %d",b);
	getch();
}