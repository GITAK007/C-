//******** concept of GLOBLE VALUE 
//******** RUN TIME VALUE

#include <iostream>
#include <conio.h>
using namespace std;
int c = 35;

int main()
{
    int a, b, c;
    cout << "enter the value of a:" << endl;
    cin >> a;
    cout << "enter the value of b:" << endl;
    cin >> b;
    c = a + b;
    cout << "the sum is =\t"<<c<<endl;
    cout << "the global value of c is =\t"<<::c;

    getch();
    return 0;
}