//**** call by value & call by reference (using swap functions) ******

#include <iostream>
#include <conio.h>
using namespace std;

// ** call by value               (1)
int  sum(int a, int b)
{
    int c = a + b;
    return c;
}

//** call by reference using pointers (2)
// void swapPointer(int* x, int* y)
// {
//   int temp = *x;
//   *x = *y;
//   *y = temp;
// }


//** call by reference using c++ reference variables (3)
// void swapReferenceVar(int &x, int &y)
// {
//   int temp = x;
//   x = y;
//   y = temp;
// }


int main()
{
    int a =3 ,b = 6;
      cout << "The sum of 2 and 6 is   " << sum(a,b)<<endl; //(1)
      cout<<"The value of a is "<<a<<"  And The value of b is "<<b<<endl;
      swap(a,b); 
   // swapPointer(&a, &b);    //  (2)
   // swapReferenceVar(a,b); //   (3)
    cout<<"The value of a is "<<a<<" And The value of b is "<<b<<endl;

     return 0;
     getch();
}