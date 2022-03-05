#include<stdio.h>
#include<conio.h>
void main()
{
	int eng[3],guj[3],sci[3],i,total[3];
	float per[3];
	clrscr();
	for(i=0;i<3;i++)
	{
		printf("\n enter marks for student %d \n",i+1);
		printf(" enter eng[ %d ] :",i);
		scanf("%d",&eng[i]);
		printf("\t enter guj[ %d ] :",i);
		scanf("%d",&guj[i]);
		printf("\n enter sci[ %d ] :",i);
		scanf("%d",&sci[i]);
	}
	for(i=0;i<3;i++)
	{
		printf("\n eng[ %d ] : %d",i,eng[i]);
		printf("\t guj[ %d ] : %d",i,guj[i]);
		printf("\t sci[ %d ] : %d",i,sci[i]);

		total[i] = eng[i] + guj[i] + sci[i];
		printf("\t total = %d",total[i]);

		per[i] = total[i]/3;
		printf("\t per = %f",per[i]);

		if(eng[i]<35 || guj[i]<35 || sci[i]<35)
			printf("\t fail");
		else if(per[i]>=75)
			printf("\t grade A ");
		else if(per[i]>=60)
			printf("\t grade B ");
		else if(per[i]>=45)
			printf("\t grade C ");
		else if(per[i]>=35)
			printf("\t grade D ");
	}
	getch();
}