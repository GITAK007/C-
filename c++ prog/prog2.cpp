#include <iostream>
using namespace std;
int main()
{
  char ch;
  cout << "ENTER THE CHARCHARTER\n";
  cin >> ch;

  if (ch == a){
     cout << "THIS IS LOWERCASE\n";
  }
 else if(ch == A){
     cout << "THIS IS UPPERCASE\n";
   }
 else{
  cout << "THIS IS NUMERIC";
}

return 0;
}
