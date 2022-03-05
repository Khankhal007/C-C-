#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d;
	clrscr();
	printf("\n enter a :");
	scanf("%d",&a);
	printf("\n enter b :");
	scanf("%d",&b);
	printf("\n enter c :");
	scanf("%d",&c);
	printf("\n enter d :");
	scanf("%d",&d);
	d=a;
	c=b;
	a=b;
	b=d;
	printf("\n a = %d\n b = %d",a,b);
	getch();

}