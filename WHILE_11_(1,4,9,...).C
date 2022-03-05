#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	clrscr();

	i=1;
	while(i<=100)
	{
		printf("\t %d",i*i);
		i++;
	}
	getch();
}