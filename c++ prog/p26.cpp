// // Function to calculate distance
// float distance(int x1, int y1, int x2, int y2)
// {
//     // Calculating distance
//     return sqrt(pow(x2 - x1, 2) +
//                 pow(y2 - y1, 2));
// }
// int main()
// {
//     cout << distance(1, 2, 4, 3);
//     return 0;
// }
//

// #include <bits/stdc++.h> //--------- 2)
// #include <conio.h>
// using namespace std;

// class Distance
// {
//     // Creating a constructor
//     int x1, y1, x2, y2;

// public:
//     Distance(int a, int b)
//     {
//         x1 = a;
//         x2 = a;
//         y1 = b;
//         y2 = b;
//     }
//     // };
//     //    void displayDistance()
//     //    {
//     //        cout <<"The distance of 2 point is (" <<x<<"," <<y<<")" << endl;
//     //    }

//     float Distance()
//     {
//         // Calculating distance
//      return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
//      cout <<
//     }
// };

// int main()
// {
//     Distance pq(2, 4, 5, 3);
//     pq.Distance();

//     getch();
//     return 0;
// }

#include <iostream>
#include <math.h>
using namespace std;

// Forward Decleration
class point2;

class point1
{
    int a, b;
    friend void distance(point1, point2);

public:
    point1(int x, int y)
    {
        a = x1;
        b = y1;
    }
    void display()
    {
        cout << "the point is  (" << a << "," << b << ") " << endl;
    }
};
class point2
{
    int c, d;
    friend void distance(point1, point2);

public:
    point2(int x, int y)
    {
        c = x2;
        d = y2;
    }
    void display()
    {
        cout << "the point is  (" << c << "," << d << ")" << endl;
    }
};

void distance(point1 o1, point2 o2)
{
    cout << "distance between them is " << sqrt(pow((o2.c - o1.a), 2) + pow((o2.d - o1.b), 2));
}

// void distance(point1 x3 , point2 x4)
// {
//     cout << "distance between them is " << sqrt(pow((x4c - x3a), 2) + pow((x4d - x3b), 2));
// }

int main()
{
    point1 p1(3, 2);
    point2 p2(9, 7);
    p1.display();
    p2.display();
    distance(p1, p2);

    return 0;
}