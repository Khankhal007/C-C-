#include<stdio.h>
#include<conio.h>
void main ()
{
	int arr[5],i;
	int *p;
	clrscr();
	for(i=0;i<5;i++)
	{
		printf("Enter a[ %d ] :",i);
		scanf("%d",&arr[i]);
	}
	p=arr;
	for(i=0;i<5;i++)
	{
		printf("\n a[ %d ] : %u",i,&arr[i]);
		printf("\t a[ %d ] : %d",i,*(p+i));
	}
	getch();
}