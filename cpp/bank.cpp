#include<iostream>
using namespace std;
class Bank{
    int balance;
    string name;
    public:
    Bank(string name ,int balance)
    { 
        this ->name = name;
        this->balance =balance;
    }
    int withdraw(int amt)
    {
        
        if(balance >= amt)
            return balance -= amt;
        else
            return 0;    
    }
    void deposit(int amt)
    {
        balance += amt;
    }
    void showBalance()
    {
       cout<<"\n\n Name : "<<name;
       cout<<"\n Balance : "<<balance;
    }
};
int main()
{
    Bank chirag("chirag",500),harshad("harshad",1000);    
    harshad.showBalance();
    harshad.deposit(2100);
    harshad.showBalance();
     if(harshad.withdraw(60)!=0)
     {
        harshad.showBalance();
     }
     else{
            cout<<"\n Not sufficient Balance ....";
     }

    chirag.showBalance();
    chirag.deposit(2100);
    chirag.showBalance();
     if(chirag.withdraw(60)!=0)
     {
    chirag.showBalance();
     }
     else{
            cout<<"\n Not sufficient Balance ....";
     }



}
