#include<stdio.h>
//#include<conio.h>
int main()
{
	char i,j,c=65;
	//clrscr();
	for(i=65;i<=70;i++)
	{
		for(j=65 ;j<=i;j++)
		if(i%2==0)
		{
			printf("%c",c);
			c++;
		}
		else
		{
			printf("%c",c+32);
			c++;
		}
		printf("\n");
	}
	return 0;
	//getch();
}