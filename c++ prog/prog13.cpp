//*** Concept of  1)Structures
//                2)Union
//                3)Enums

// 1)use of struct & typedef.
#include <iostream>

using namespace std;

typedef struct employee
{         
    /* data */         
    int eId;      // store   4 byte 
    char favChar; //         1 byte
    float income; //         4 byte    total 9 byte
    // using of (typedef)- we write in short(sep) in  place of(struct employee)
}sep;


// 2) Use of (union)- we use for accurate stroage management
union money
{
    /* data */    // use of unoin it store
    int rice;     //       4 byte
    char car;     //       1 byte
    float pounds; //       4 byte    total 4 byte
};

int main()
{
   
    // sep aman;
    // aman.eId = 2;
    // aman.favChar = 'a';
    // aman.income = 5000000;
    // cout << "the value is     " << aman.eId << endl;
    // cout << "the value is     " << aman.favChar << endl;
    // cout << "the value is     " << aman.income << endl;

    // union money m1;
    // m1.rice = 45;
    // cout<<m1.rice; 
    // 

    // 3) enum
        enum Meal{breakfast, lunch, dinner};
        Meal m1 = dinner;
        cout<<m1<<endl;
        // Meal m2 = lunch;
        // Meal m3 = dinner;
        // cout<<m1<<endl;
        // cout<<m2<<endl;
        // cout<<m3<<endl;
    


    return 0;
    

}