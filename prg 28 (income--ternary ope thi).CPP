#include<stdio.h>
#include<conio.h>
int main ()
{
	clrscr();
	int income;
	float tax;

	printf("\nEnter your income");
	scanf("%d",&income);

	income<=2500 ? printf("\nNot Liable for tax") :
	income>=2500 && 5000>=income ? printf("\n Tax : %f",(income - 2500) * 0.10) :
	income>=5000 && 1000>=income ? printf("\n Tax : %f",(income - 5000)  * 0.20 + 250) :
	printf("Tax : %f",(income - 10000) * 0.30 + 1250);



	getch();
	return 0;
}