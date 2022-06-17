//****  Recursion & recursive function  

#include <iostream>
#include <conio.h>
using namespace std;
 
// ********  Factorials number      (1)

// int factorial(int n)
// {
//     if(n<=1){
//       return 1;
//   }
 
//     return n* factorial(n-1);
// }


// int main() {
//     // take example of  Factorial of number
//     // 5!= 5*4*3*2*1 =120
//     // 3! =3*2*1 = 6
//     // so, n! = n*(n-1)!
//     int a;
//     cout<<"Enter a number"<<endl;
//     cin>>a;
//     cout<<"The factorial of  "<< a<< " is  "<<factorial(a)<<endl;



// *******    Fabonacci series     (2)

int fib(int n)
{
    if(n<2){
      return 1;
  }
 
    return fib(n-2)+ fib(n-1);
  }


int main() {
    
    int a;
    cout<<"Enter a number"<<endl;
    cin>>a;
    cout<<"The term in fibonacci series  at position  "<<a<< " is "<<fib(a)<<endl;
return 0;
getch();
}