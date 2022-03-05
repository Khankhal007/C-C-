#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i;
	clrscr();
	printf("\n enter value :");
	scanf("%d",&n);

	for(i=-n;i<=n;i++)
	{
		printf("\n %d",i);
	}
	getch();
}