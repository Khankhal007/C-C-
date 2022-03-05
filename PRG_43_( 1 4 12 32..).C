#include<stdio.h>
#include<conio.h>
void main ()
{
     int a=1,b=2,c=0;
     clrscr();

     for(a=1;a<=100;a=b*a)
     {
	c=a+c*2;
	printf("\n %d",c);
     }
     getch();
}