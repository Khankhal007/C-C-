#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	char name[100];
	clrscr();
	printf("\n  enter  your name :");
	gets(name);
	for(i=0;name[i]!='\0';i++)
	{
		name[i]-=32;
	}
	printf("\n %s",name);
	getch();
}

