#include<stdio.h>
#include<conio.h>
void main()
{
	int i,a=0,c=0;
	clrscr();

	for(i=1;i<=10;i=i+2)
	{
		a+=i;
	}
	printf("\n odd :%d",a);

	for(i=0;i<=10;i=i+2)
	{
		c+=i;
	}
	printf("\n even :%d",c);
	getch();
}