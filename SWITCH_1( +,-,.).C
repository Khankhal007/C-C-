#include<stdio.h>
#include<conio.h>
void main()
{
	float a,b;
	int c;
	clrscr();
	printf("\n enter the value a :");
	scanf("%f",&a);
	printf("\n enter the value b :");
	scanf("%f",&b);
	printf("\n enter the value c :");
	scanf("%d",&c);
	switch(c)
	{
		case 1:
			printf("\n value = %f",a+b);
		break;
		case 2:
			printf("\n value = %f",a*b);
		break;
		case 3:
			printf("\n value = %f",a-b);
		break;
		case 4:
				printf("\n value = %f",a/b);
		break;
		default:
			printf("\n wrong");
	}
	getch();
}