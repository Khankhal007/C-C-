
#include<stdio.h>
#include<conio.h>
void pattern(int n)
{
	int i,j,sp=30;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=sp;j++)
			printf(" ");
		for(j=1;j<=i;j++)
		{
			printf(" *");
		}
		printf("\n");
		sp--;
	}


}
int main()
{
	void pattern(int);
	clrscr();
	pattern(3);
	pattern(5);
	pattern(7);
	getch();
	return 0;

}


