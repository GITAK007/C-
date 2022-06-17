//***  use of friend fn() for access multiple of private members of any class

#include  <iostream >
#include <conio.h>
using namespace std;

// Forward decleration
class complex;

class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }

    int sumRealComplex(complex, complex);
    int sumCompComplex(complex, complex);
};

class complex
{
    int a, b;
     friend int calculator :: sumRealComplex(complex , complex ); // individually friend decleration 
     friend int calculator :: sumCompComplex(complex , complex ); // individually friend decleration 
    
    //  so declare friend to whole class 
    friend class calculator;
public:
    int setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printNumber()
    {
        cout << "Your no is : " << a << "+" << b << "i" << endl;
    }
};

int calculator ::sumRealComplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}

int calculator ::sumCompComplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    complex o1, o2;
    o1.setNumber(4, 6);
    o2.setNumber(2, 3);

    calculator calc;
    int result = calc.sumRealComplex(o1, o2);
    cout <<"The sum of real part (4,2) of complex No : " << result << endl;

    int resultC = calc.sumCompComplex(o1, o2);
    cout <<"The sum of Imaginary part (6,3)of complex No : " << resultC << endl;

    getch();
    return 0;
}