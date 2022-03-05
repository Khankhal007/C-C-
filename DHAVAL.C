#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	char name[100],b[5];
	clrscr();
	printf("\n Enter name :");
	gets(name);
	for(i=0,j=5;name[i]!='\0',j>=0;i++,j--)
	{
		name[i]=b[j];
		printf(" %s",i);
	}
	printf(" %c",name[i]);
	getch();
}

