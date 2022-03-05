#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char str[10];
	clrscr();
	printf("\n enter string :");
	gets(str);
	printf("\n string length : %d",strlen(str));
	printf("\n string reverse : %s",strrev(str));
	printf("\n string upper : %s",strupr(str));
	printf("\n string lower : %s",strlwr(str));
	getch();
}

