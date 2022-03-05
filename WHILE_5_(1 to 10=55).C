#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j=0;
	clrscr();

	i=0;
	while(i<=10)
	{
		j=j+i;
		i++;
	}
	printf("\n %d",j);
	getch();
}