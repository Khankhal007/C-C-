#include<stdio.h>
#include<conio.h>
#define n 5
void main()
{
	int a[n],i,key,index = -1;
	clrscr();
	printf("Enter %d element of an array :",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf(" Enter element for delete :");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(a[i]==key)
		{
			index = i;
			break;
		}
	}
	if(index != -1)
	{
		for(i=index;i<n-1;i++)
		{
			a[i] = a[i+1];
		}
		printf("\n -----new array is ----");
		for(i=0;i<n-1;i++)
			printf("\n a[ %d ] - %d",i,a[i]);
	}
	else
	{
		printf("\n element %d not found",key);
	}
	getch();
}
