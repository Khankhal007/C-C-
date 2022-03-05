#include<stdio.h>
#include<conio.h>
void main()
{
	int i,a[3],b[3],j;
	clrscr();
	for(i=1;i<=3;i++)
	{
		printf(" enter a[%d] :",i);
		scanf("%d",&a[i]);
	}
	for(i=1,j=3;i<=3,j>=1;i++,j--)
	{
		b[i]=a[j];
		printf("\n b[%d] : %d",i,b[i]);
	}
       /*	for(i=1;i<=3;i++)
	{
		printf("\n b[%d] : %d",i,b[i]);
	}*/
	getch();
}

