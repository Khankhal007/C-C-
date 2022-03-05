#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3],i;
	clrscr();
	for(i=0;i<3;i++)
	{
		printf(" enter a[ %d ] :",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<3;i++)
	{
		if(a[i]<=50 || a[i]>60)
		{
		}
		else
		{
			printf("\n under 50 ---- 60 [%d]",a[i]);
		}
	}
	getch();
}

