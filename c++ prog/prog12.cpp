#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int c, n,J=0;
    cout << "Enter the number \n\t n=";
    cin >> n;

//***** Table of any number using for loop ************
             // for (int i = 0; i <= 10; i++)
             // {
                 // c = n * i;
                 // cout << c << endl;
             // }


// **** Table of any number using while loop ************
            // while(i<=10)
            // {
                // c = n * i;
                // cout << c << endl;
                // i++;
            // }
        
 
 // ***** Table of any number using do while loop ***********
        int i = 0;
        do
        {
           
         
                  while(J<=10){
                      J++;
                  }
            
            c = n * i;
         
         
            cout<<"Table of n * "<<J<<"="<<c<<endl;
        } while (i<=10);
        

        
        
        
   getch();
    return 0;
}