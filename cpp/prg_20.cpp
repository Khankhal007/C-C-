#include<iostream>
using namespace std;
int main()
{
	int income,tax,b;
	cout<<"\n enter income : ";
	cin>>income;

	if(income<=2500)
	{
		cout<<"\n not liable for tax";
	}
	else if(income<5000 && income>2500)
	{
		tax=(income-2500)*0.1;

		cout<<"\n tax :"<<tax;
		cout<<"\n\t liable for 10% tax";
	}
	else if(income<10000 && income>5000)
	{
		tax=((income-5000)*0.2  + 2500*0.1);

		cout<<"\n tax :"<<tax;
		cout<<"\n\t liable for 20% tax";

	}
	else
	{
		tax=((income-10000)*0.3 + 2500*0.1+ 5000*0.2);
		cout<<"\n tax :"<<tax;
		cout<<"\n\t liable for 30% tax";

	}
}




