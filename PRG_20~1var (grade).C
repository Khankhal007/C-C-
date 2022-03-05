#include<stdio.h>
#include<conio.h>
void main ()
{
	int maths,sci,eng,total,grade;
	float per;
	clrscr();
	printf("\n enter marks of maths : ");
	scanf("%d",&maths);

	printf("\n enter marks of sci : ");
	scanf("%d",&sci);

	printf("\n enter marks of eng : ");
	scanf("%d",&eng);

	if(maths <= 35 || sci <= 35 || eng <= 35 )
	{
		printf("\nBetter luck next time");
	}
	else
	{
	total = maths + sci + eng;
	printf("\n total = %d",total);

	per = total/3;
	printf("\n per = %f",per);

	if(per>=75)
	{
		  printf("\n grade A :");
	}
	else if(per>=60)
	{
		printf("\n grade B :");
	}
	else if(per>=45)
	{
		printf("\n grade C :");
	}
	else if(per>=35)
	{
		printf("\n grade D :");
	}
	else
	{
		printf("\n batter luck next time");
	}
	}

	getch();
}



