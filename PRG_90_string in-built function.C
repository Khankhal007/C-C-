#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char str1[10],str2[10];
	clrscr();
	printf("\n enter string1 :");
	gets(str1);
	printf("\n enter string2 :");
	gets(str2);

	printf("\n string compare : %d",strcmp(str1,str2));
	printf("\n string compare not case senitive : %s",strcmpi(str1,str2));
	strcat(str1,str2);
	printf("\n string1 concate : %s",str1);
	strcpy(str1,str2);
	printf("\n string concate : %s",str1);
	getch();

}

