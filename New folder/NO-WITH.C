#include<stdio.h>
#include<conio.h>
int pattern()
{
	int sp;

	printf("Enter your space : ");
	scanf("%d",&sp);

	return sp;

}
void main()
{
	int i,j,c;
	clrscr();
	c=pattern();
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=c;j++)
			printf(" ");
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}

	getch();
}


