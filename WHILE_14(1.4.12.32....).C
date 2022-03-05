#include<stdio.h>
#include<conio.h>
void main()
{
	int i,b=2,c=0;
	clrscr();

	i=1;
	while(i<=50)
	{
		c=i+c*2;
		printf("\t %d",c);
		i=b*i;
	}
	getch();
}