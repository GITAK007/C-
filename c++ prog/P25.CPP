// #include <iostream>
// #include <conio.h>
// using namespace std;

// class complex
// {
//     // Creating a constructor
//     int a, b;

// public:
//     complex(void); // Consructor decleration

//     void printNumber()
//     {
//         cout << "Your no is : " << a << "+" << b << "i" << endl;
//     }
// };

// complex ::complex(void) //-------> this is Default constructor, it not accepts any parameters
// {
//     a = 4;
//     b = 6;
// }

// int main()
// {
//     complex c1, c2, c3;
//     c1.printNumber();
//     c2.printNumber();
//     c3.printNumber();

//     getch();
//     return 0;
// }


            // ------> implementing of parameterized Constructor
#include <iostream> ------------> 1)
#include <conio.h>
using namespace std;

class complex
{
    // Creating a constructor
    int a, b;

public:
    complex(int, int); // Consructor decleration

    void printNumber()
    {
        cout << "Your no is : " << a << "+" << b << "i" << endl;
    }
};

 complex ::complex(int x, int y) //------> this is Paramiterized constructor, it accepts some parameters
    {
        a = x;
        b = y;
    }

 int main()
    {       
         // here is 2 types to pass  complex member

         // implicit call
         complex a(3, 5);

         // Explicit call
         complex b = complex(6, 2);

        a.printNumber();
        b.printNumber();

        getch();
        return 0;
    }


// #include <bits/stdc++.h>   //--------- 2)
// #include <conio.h>
// using namespace std;

// class Point
// {
//     // Creating a constructor
//     int x, y;

// public:
//     Point(int a, int b)
//    {
//        x = a;
//        y = b;
//    }
//    void displayPoint()
//    {
//        cout <<"The point is (" <<x<<"," <<y<<")" << endl;
//    }
// };

//  int main()
//     {       
//         Point p(3, 5);
//         Point q(1,-1);
//         p.displayPoint();
//         q.displayPoint();

//         getch();
//         return 0;
//     }