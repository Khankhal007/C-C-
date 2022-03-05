#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10][10],i,j,b[10][10],total;
	clrscr();
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf(" Enter a[ %d ][ %d ] :",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(j=0;j<3;j++)
	{
		for(j=0;j<3;j++);
		{
			printf("Enter b[ %d ][ %d ] :",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	printf("\n Matrix a is               \t Matrix b is \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t %d",a[i][j]);
		       //	printf("\t %d",b[i][j]);
		}
		for(j=0;j<3;j++)
		{
		       //	printf("\t %d",a[i][j]);
			printf("\t %d",b[i][j]);
		}
		printf("\n");
	}
	getch();
}