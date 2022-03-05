#include<stdio.h>
#include<conio.h>
void main()
{
	float i,b=0.5;
	clrscr();

	i=0.5;
	while(i<=5.0)
	{
		b=b+i;
		printf("\n %f",b);
		i++;
	}
	getch();
}