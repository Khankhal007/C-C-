#include<stdio.h>
#include<conio.h>
void main ()
{
	int a=1,b=1,c,i;
	clrscr();

	for(i=1;i<=16;i++)
	{
	      printf("\t %d",a);
	      c=a+b;
	      a=b;
	      b=c;
	}
	getch();
}