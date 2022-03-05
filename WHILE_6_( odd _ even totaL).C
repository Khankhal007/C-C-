#include<stdio.h>
#include<conio.h>
void main()
{
	int i,a=0,b=0;
	clrscr();

	i=0;
	while(i<=10)
	{
		if(i%2==0)
			a+=i;
		else
			b+=i;
		i++;
	}
	printf("\n even : %d",a);
	printf("\n odd  : %d",b);
	getch();
}