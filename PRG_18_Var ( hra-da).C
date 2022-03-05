#include<stdio.h>
#include<conio.h>
void main()
{
	int  ba;
	float HRA,DA;
	clrscr();
	printf("\n enter ba =");
	scanf("%d",&ba);

	if(ba<=5000)
	{
		HRA=ba/100*8;
		DA=ba/100*20;
		printf("\n HRA is :%f\nDA is :%f",HRA,DA);
	}
	else if(ba<=10000)
	{

			HRA=ba/100*12;
			DA =ba/100*30;
			printf("\n HRA is :%f\nDA is :%f",HRA,DA);
	}
	else if(ba<=15000)
	{
			HRA=ba/100*15;
			DA =ba/100*40;
			printf("\n HRA is :%f\nDA is :%f",HRA,DA);
	}
	else
	{
			HRA=ba/100*20;
			DA =ba/100*50;
	}
	getch();

}
