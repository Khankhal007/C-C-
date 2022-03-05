#include<stdio.h>
#include<conio.h>
void main ()
{
	int i,n;
	clrscr();

	for(i=1;i<=100;i++)
	{
		if(i%2==0)
			printf("\t %d",i*i);
		else
			printf("\t %d",i);

	}
	getch();
}