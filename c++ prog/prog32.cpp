// --------> Multilevel Level Inheritance
    /* 1) ist Student class(Base class)
       2) 2nd Exam class   (Derived class)
       3) 3rd Result class (Derived class)
    */
   
#include <iostream>
#include <conio.h>
using namespace std;

class Student     //---->  ist Class created named Student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number(void);
};

void Student ::set_roll_number(int r)
{
    roll_number = r;
}

void Student ::get_roll_number()
{
    cout << "AK your roll number is " << roll_number << endl;
}

class Exam : public Student  //-------> 2nd class Created named Exam
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};

void Exam ::set_marks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}

void Exam ::get_marks()
{
    cout << "AK marks obtained in maths are: " << maths << endl;
    cout << "AK marks obtained in physics are: " << physics << endl;
}

class Result : public Exam   //------> 3rd class Created Named Result
{
    float percentage;

public:
    void display_results()
    {
        get_roll_number();
        get_marks();
        cout << "AK Your result is " << (maths + physics) / 2 << "%" << endl;
    }
};

int main() {

Result ak;
    ak.set_roll_number(15);
    ak.set_marks(95.4, 90.2);
    ak.display_results();
 
getch();
return 0;
}