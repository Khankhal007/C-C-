#include <iostream>
using namespace std;
class Rent
{
    public:
        int hatch();
        int seadan();
        int suv();
        int muv();
};
inline void  ::hatch()
{

}
int main()
{
    cout << "\n :: welcome to car rent shop ::\n";
    cout << "\n which car is need :\n";
    cout << "\n 1.hatch\n 2.seadan\n 3.suv\n 4.muv\n";
    int choose;

    cout << "\n please select a car :";
    cin >> choose;

    switch (choose)
    {
    case 1:
        cout << "\n hatch \n";
        break;
    case 2:
        cout << "\n seadan \n:";
        break;
    case 3:
        cout << "\n suv \n:";
        break;
    case 4:
        cout << "\n muv \n:";
        break;
    default:
        break;
    };
    int cartype, day;

    cout << "\n luxury for enter press :- 1 :\n premium for enter press :- 2 :   ::-> ";
    cin >> cartype;
    switch (cartype)
    {
    case 1:
        cout << "\n luxury ";
        break;
    case 2:
        cout << "\n premium :";
        break;
    default:
        break;
    }

    cout << "\n how many days :";
    cin >> day;
    
    Rent car;
    car.hatch();
}