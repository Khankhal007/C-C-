#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j=1;
	clrscr();

	i=1;
	while(i<=20)
	{
		printf("\n %d",j);
		j=j*2;
		i++;
	}
	getch();
}