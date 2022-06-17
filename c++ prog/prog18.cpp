// ***  USING Functions ( volume() )

#include <iostream>
#include <conio.h>
using namespace std;

// int sum (int a, int b){
//     cout<<"Using functions using 2 arguments -> ";
//     return (a+b);
// }
// int sum (int a, int b, int c){
//     cout<<"Using functions Using 3 srgumens ->  ";
//     return (a+b+c);
// }

//   calc.the volume of cuboid 
int volume(int l, int b, int h)
{
    return(l*b*h);
}

//   calc. the volume of cylinder
int volume(int r,int h){
    return(3.14*r*r*h);
}

//    calc. the volume of cube
int volume(int a)
{
    return(a*a*a);
}

int main() {
// cout<<"The sum of 4 & 2 is   ="<<sum(4,2)<<endl;
// cout<<"The sum of 4 and 3 & 5 is  ="<<sum(4,3,5)<<endl;

 cout<<"The volume of cuboid of 3 & 2 & 4  is " <<volume(3,2,4) <<endl;
 cout<<"The volume of cylinder of 3 & 4 is "<<volume(3,4)<<endl;
 cout<<"The volume of cube of 2 is "<<volume(2) <<endl;
getch();
return 0;
}