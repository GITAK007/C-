// //** Array of object
// #include <iostream>
// #include <conio.h>
// using namespace std;

// class Employee
// {
//     int id;
//     // int salary;

// public:
//     void setId()
//     {
//         int salary;
//         salary = 2000;
//         cout << " Enter the Id of Employee" << endl;
//         cin >> id;
//     }
//     void getId()
//     {
//         cout << "The Id of Employee is : " << id << endl;
//         cout << "The salary of Employee is : " << salary << endl;
//     }
// };

// int main()
// {

//     int salary;
//     Employee hackak[5];
//     for (int i = 0; i < 5; i++)
//     {
//         hackak[5].setId();
//         hackak[5].getId();
//     }

//     // cout<<"The salary" << salary << endl;
//     getch();
//     return 0;
// }



//                          ** Passing object as fn()
#include<iostream>
using namespace std;

class complex{
    int a;
    int b;

    public:
        void setData(int v1, int v2){
            a = v1;
            b = v2;
        }

        void setDataBySum(complex o1, complex o2){
            a = o1.a + o2.a;
            b = o1.b + o2.b;
        }

        void printNumber(){
            cout<<"Your complex number is "<<a<<" + "<<b<<"i"<<endl;
        }
};

int main(){
    complex c1, c2, c3;
    c1.setData(1, 2);
    c1.printNumber();

    c2.setData(3, 4);
    c2.printNumber();

    c3.setDataBySum(c1, c2);
    c3.printNumber();
    return 0;
}