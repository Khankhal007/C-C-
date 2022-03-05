#include <iostream>
using namespace std;
class student
{
    int marks;
    string name;

public:
    student(string name, int marks)
    {
        this->name = name;
        this->marks = marks;
    }
    int pass(int marks)
    {
        if (marks >= marks)
            return marks -= marks;
        else
            return 0;
    }
    void fail(int marks)
    {
        marks += marks;
    }
    void showmarks()
    {
        cout << "\n\n name :" << name;
        cout << "\n marks :" << marks;
    }
};
int main()
{
    student chirag("chirag", 50), harshad("harshad", 100), dhruv("dhruv", 99), dhaval("dhaval", 70);
    chirag.showmarks();
    chirag.pass(50);
    chirag.showmarks();
    if (chirag.pass(33) != 0)
    {
        chirag.showmarks();
    }
    else
    {
        cout << "\n std id fail...";
    }
    harshad.showmarks();
    harshad.pass(33);
    harshad.showmarks();
    if (harshad.pass(33) != 0)
    {
        harshad.showmarks();
    }
    else
    {
        cout << "\n std id fail...";
    }
    dhruv.showmarks();
    dhruv.pass(33);
    dhruv.showmarks();
    if (dhruv.pass(33) != 0)
    {
        dhruv.showmarks();
    }
    else
    {
        cout << "\n std id fail...";
    }
    dhaval.showmarks();
    dhaval.pass(33);
    dhaval.showmarks();
    if (dhaval.pass(33) != 0)
    {
        dhaval.showmarks();
    }
    else
    {
        cout << "\n std id fail...";
    }
}