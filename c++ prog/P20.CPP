// *** Implementation of Static Data Members & Methods
//  Ue of Counter

#include <iostream>
#include <conio.h>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setData()
    {
        cout << " Enter the ID" << endl;
        cin >> id;
        count++;
    }

    void getData()
    {
        cout << "The ID of This employee : " << id << "\nThis employee NO.is :  " << count << endl;
    }

    static void getCount()
    {
        cout<<"The value of count "<< count << endl;
    }
};


int Employee ::count = 5; // count is the static data member of class Employee
int main()
{
    Employee ak;

    // If we want to make more employee
    Employee kalua, akjal;

    ak.setData();
    ak.getData();
    Employee::getCount();  // use of static function

    kalua.setData();
    kalua.getData();
    Employee::getCount();  // use of static function

    akjal.setData();
    akjal.getData();
    Employee::getCount();  // use of static function


    getch();
    return 0;
}