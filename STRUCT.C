#include<stdio.h>
#include<conio.h>
struct acc
{
	int accno;
	char name[20];
	int bal;
};
void main()
{
	struct acc a[3];
	int i;
	clrscr();
	for(i=0;i<3;i++)
	{
		a[i].accno = i+1;
		printf(" Enter the details of account %d\n",i+1);

		printf(" Enter the name \n");
		scanf("%s",&a[i].name);

		printf(" Enter the balance \n");
		scanf("%d",&a[i].bal);

	}
	printf("The Account details are\n");
	printf("No\tname\t\tbalance\n");

	for(i=0;i<3;i++)
	{
		printf("%d\t%s\t\t%d\n",a[i].accno,a[i].name,a[i].bal);
	}
	getch();
}

