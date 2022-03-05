#include<stdio.h>
#include<conio.h>
void main()
{
	int i,b=1,c;
	clrscr();

	i=0;
	while(i<=10)
	{
		printf("\t %d",b);
		c=i+b;
		i=b;
		b=c;
	}
	getch();
}