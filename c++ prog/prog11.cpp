#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
int main()
{
    //  ************ *normal variables**********
    //  int a = 2;
    // cout<<"The value of a was : "<<a<<endl;

    //  a = 4;
    //  cout << "The value of is : "<<a<<endl;

    //  a = 78;
    //  cout<<"The value of a is now : "<<a<<endl;
    //  cout << "kya kalua shai he na : ~~~~"<<endl;
    //

   
    // ********** constants in c++ **************-------
     // const int a = 64;
    // cout<<"The value of a is : "<<a<<endl;
    
    // a =3;
    // cout<<"The value of a is : "<<a<<endl;


    // *********** Manipulators in c++ ***************----
    // (1)endl.  (2)setw(header file is #include iomanip).

    //   if we right this
    int a = 3, b = 645, c = 7422, d = 86548;
    cout << "The value of a without setw is : " << a << endl;
    cout << "The value of b without setw is : " << b << endl;
    cout << "The value of c without setw is : " << c << endl;
    cout << "The value of d without setw is : " << d << endl;

    cout << "The value of a: " << setw(8) << a << endl;
    cout << "The value of b: " << setw(8) << b << endl;
    cout << "The value of c: " << setw(8) << c << endl;
    cout << "The value of d: " << setw(8) << d << endl;

    getch();
    return 0;
}