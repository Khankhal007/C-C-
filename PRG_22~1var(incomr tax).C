#include<stdio.h>
#include<conio.h>
void main()
{
	int income,tax,b;
	clrscr();
	printf("\n enter income : ");
	scanf("%d",&income);

	if(income<=2500)
	{
		printf("\n not liable for tax");
	}
	else if(income<5000 && income>2500)
	{
		tax=(income-2500)*0.1;

		printf("\n tax :%d",tax);
		printf("\n\t liable for 10% tax");
	}
	else if(income<10000 && income>5000)
	{
		tax=((income-5000)*0.2  + 2500*0.1);

		printf("\n tax :%d",tax);
		printf("\n\t liable for 20% tax");

	}
	else
	{
		tax=((income-10000)*0.3 + 2500*0.1+ 5000*0.2);
		printf("\n tax :%d",tax);
		printf("\n\t liable for 30% tax");

	}
	getch();
}




