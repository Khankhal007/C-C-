#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,c;
	char name[10],reverces[10];
	clrscr();
	printf("\n enter name :");
	gets(name);

	for(i=0;name[i]!='\0';i++)

	for(j=i-1,c=0;j>=0;j--)
	{
		reverces[c++]=name[j];
	}
	reverces[c++]='\0';
	printf("\n %s",reverces);
	getch();
}