#include<stdio.h>
#include<conio.h>
void main()
{
	int  ba;
	float HRA,DA,gross_salary;
	clrscr();
	printf("\n enter ba =");
	scanf("%d",&ba);

	if(ba<=5000)
	{
		HRA=ba/100*8;
		DA=ba/100*20;
		gross_salary = ba+HRA+DA;
		printf("\n gross_salary =%f",gross_salary);
	}
	else if(ba<=10000)
	{

			HRA=ba/100*12;
			DA =ba/100*30;
			gross_salary = ba+HRA+DA;
			printf("\n gross_salary =%f",gross_salary);
	}
	else if(ba<=15000)
	{
			HRA=ba/100*15;
			DA =ba/100*40;
			gross_salary = ba+HRA+DA;
			printf("\n gross_salary = %f",gross_salary);
	}
	else
	{
			HRA=ba/100*20;
			DA =ba/100*50;
	}
	getch();

}
