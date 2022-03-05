#include<stdio.h>
#include<conio.h>
void main()
{
	float unit,amount,a,b,z;
	clrscr();
	printf(" enter unit :");
	scanf("%f",&unit);

	if(unit<=100)
	{
		amount=unit*0.6+50;
		printf("\n amount :%f",amount);
		printf("\n\t charge 60/ unit");
	}
	else if(unit<=200)
	{
		amount=((unit-100)*0.8+50)+(100*0.6+50);
		printf("\n amount :%f",amount);
		printf("\n\t charge 80/ unit");
	}
	else
	{
		a=((unit-200)*0.9+50)+(100*0.6+50)+(200*0.8+50);
		b=a*15/100;
		amount = a+b;

		printf("\n amount :%f",amount);
		printf("\n\t charge 90% unit");
	}
	getch();


}