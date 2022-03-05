#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,element[100],pos,value;
	clrscr();

	printf("\n enter array : ");
	scanf("%d",&n);

	printf("\n enter element :");
	for(i=0;i<n;i++)
		scanf("%d",&element[i]);

	printf("\n enter position :");
	scanf("%d",&pos);
	printf("\n enter element :");
	scanf("%d",&value);

	for(i=n-1;i>=pos;i--)
		element[i+1]=element[i];

	element[pos]=value;
	printf("\n ----- new array is ----- \n");

	for(i=0;i<=n;i++)
		printf("%d\n",element[i]);

	getch();
}

