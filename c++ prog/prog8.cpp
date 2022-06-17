// ******* ARRAY ********

#include <iostream>
#include <conio.h>
#include <array>
using namespace std;
int main() {

array<int,9> a={1,2,3,4,7,3,8,9,0};

int size =a.size();
 for(int i=0;i<size;i++)
 cout<<a[i]<<endl;

 cout<<"ELEMENT AT 5 INDEX->"<<a.at(5)<<endl;
 cout<<"Empty or not->" <<a.empty()<<endl;
 cout<<"First element->" <<a.front()<<endl;
 cout<<"Last element->" <<a.back()<<endl;
    
getch();
return 0;
}