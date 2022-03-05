#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,a[10][10],b=0,c=0,d=0;
	clrscr();
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("enter a[%d][%d] :  ",i,j);
		scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t%d",a[i][j]);
		}
		printf("\n\n");
	}
	for(i=0;i<1;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i==j)
			{
				b=b+a[i][j];
			}
			else if(i<j)
			{
				c=c+a[i][j];
			}
			else
			{
				d=d+a[i][j];
			}
		}
		printf("\n");
	}
	printf("\n middle total  :%d ",b);
	printf("\n upper total  :%d ",c);
	printf("\n lower total  :%d ",d);
	getch();
}





