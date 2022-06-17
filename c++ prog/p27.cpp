//         //------->Constructor Overloading  1)
// #include <iostream>
// #include <conio.h>
// using namespace std;

// class complex
// {
//     // Creating a constructor
//     int a, b;

// public:
//     complex(int x, int y) // Consructor decleration 1
//    {
//         a = x;
//         b = y;
//    }
//    complex() // Consructor decleration 2
//    {
//         a = 0;
//         b = 0;
//    }
//    complex(int x)// Consructor decleration 3
//    {
//         a = x;
//         b = 0;
//    }

//     void printNumber()
//     {
//         cout << "Your no is : " << a << "+" << b << "i" << endl;
//     }
// };
// int main() {
// complex C1(4, 6);
// C1.printNumber();

// complex C2;
// C2.printNumber();

// complex C3(2);
// C3.printNumber();

// getch();
// return 0;
// }


// ------------->  Constructor with default arguments  (2)
#include <iostream>
// #include <conio.h>
using namespace std;

class complex
{
    // Creating a constructor
    int d1, d2, d3;

public:
    complex(int x =1, int y = 4 ,int z = 3) // Consructor decleration 1
    {
        d1 = x;
        d2 = y;
        d3 = z;
    }

    void printNumber();
};

void complex :: printNumber()
 {
     cout << "Value of d1 ,d2 & d3 is : " << d1 << " , " << d2 << " & " << d3 << endl;
 }

int main()
{
    complex C;
    C.printNumber();
return 0;
}