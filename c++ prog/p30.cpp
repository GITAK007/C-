// -------------------> Concept of copy Constructor
#include <iostream>
#include <conio.h>
using namespace std;

class Number
{
    int a;
    
    public:
          Number()
          {
              a = 0;
          }

          Number(int num)
          {
              a = num;
          }

               Number(Number &obj)
               {
                    cout << " \nCopy  constructor called!! "<< endl;
                    a = obj.a;
               }
               
               void display(){
                   cout << "The num of object is : " <<a << endl;
               }
};

int main() {
Number x , y(30), z(45) , z3(y);
x.display();
y.display();
z.display();

Number  z1(y);     //--->  Copy constructor invoked  1)
z1.display();

// Number  z2(z);  //--->  Copy constructor invoked  2)
// z2.display();

z3.display();     // yes, Copy constructor will invoked  3)

// z4 = z;        No, Copy constructor will invoked 

getch();
return 0;
}