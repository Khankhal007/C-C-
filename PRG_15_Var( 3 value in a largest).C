#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("\n enter a :");
	scanf("%d",&a);
	printf("\n enter b :");
	scanf("%d",&b);
	printf("\n enter c :");
	scanf("%d",&c);
	if(a>b)
	{
		printf("\n\t a is largest");
	}
	else
	{
		if(b>c)
		{
			printf("\n\t b is largest");
		}
		else
		{
			if(c>a)
			{
				printf("\n\t c is largest");
			}
		}
	}

	getch();
}



