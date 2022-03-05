#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1,j,sp=40;
	clrscr();
	h:
		for(j=1;j<=sp;j++)
			printf(" ");
		for(j=1;j<=i;j++)
		{
			printf(" %d",j);
		}
		printf("\n");
		i++;
		sp--;
		if(i<=5)
		goto h;
	getch();


}
