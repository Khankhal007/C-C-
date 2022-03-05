#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	clrscr();

	i=0;
	while(i<=50)
	{
		if(i%2)
			printf("\n odd %d",i);
		else
			printf("\t even %d",i);
		i++;
	}

	getch();
}