#include<iostream>
using namespace std;
class Student 
{
 public:
 double marks1, marks2;
};
Student createStudent( ) 
{
 Student s;
 s.marks1 = 96.5;
 s.marks2 = 75.0;
 cout << "Marks 1 = " << s.marks1 << endl;
 cout << "Marks 2 = " << s.marks2 << endl;
 return s;
}
int main() 
{
 Student s1;
 s1 = createStudent();
 return 0;
}

