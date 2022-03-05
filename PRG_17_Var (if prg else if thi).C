//nested if
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("\n enter 3 values :");
	scanf("%d%d%d",&a,&b,&c);

	if(a>b && a>c)
	{
		printf("\n a(%d) is largest",a);
	}                                   \
	else if(b>c)
	{
		printf("\n b(%d) is largest",b);
	}
	else
	{
		printf("\n c(%d) is largest",c);
	}
	getch();
}
