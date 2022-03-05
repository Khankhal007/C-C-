#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3],i,total=0,avg;
	clrscr();
	for(i=0;i<3;i++)
	{
		printf(" enter a[ %d ] :",i);
		scanf("%d",&a[i]);
	}
	printf("\n-------------------");
	printf("\n total:");
	printf("\t avg :");

	for(i=0;i<3;i++)
	{
		total=total+a[i];
		avg=total/2;
	}
	printf("\n %d",total);
	printf("\t %d",avg);
	getch();

}
