// ****Functions & its prototype ******

#include <iostream>
#include <conio.h>
using namespace std;

// Function protype
// syntax: type function-name (argument)
int sum(int a, int b);

int main()
{
    int num1, num2;  //(num1, num2 are actual parameters/arguments)
    cout << "Enter the first number" << endl;
    cin >> num1;
    cout << "Enter the second number" << endl;
    cin >> num2;
    cout << "The sum is " << sum(num1, num2);
    getch();
    return 0;
} 
    int sum(int a, int b)  //(a,b are formal parameters/arguments)
{
    int c = a + b;
    return c;
}
