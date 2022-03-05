#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3],b[3],i,total;
	clrscr();
	for(i=0;i<3;i++)
	{
		printf(" enter a[ %d ] :",i);
		scanf("%d",&a[i]);
		printf("\t enter b[ %d ] :",i);
		scanf("%d",&b[i]);
	}
	for(i=0;i<3;i++)
	{
		printf("\n a[ %d ] : %d",i,a[i]);
		printf("\t b[ %d ] : %d",i,b[i]);

		total=a[i]+b[i];
		printf("\t = %d",total);
	}
	getch();
}