#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3],i,total;
	clrscr();
	for(i=0;i<3;i++)
	{
		printf(" enter a[ %d ] :",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<3;i++)
	{
		total=a[i]*2;
		printf("\n %d",total);
	}
	getch();
}

