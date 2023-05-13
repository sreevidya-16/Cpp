#include <iostream>
using namespace std;

// Function Overloading
int add(int a, int b){
  return a + b;
}

double add(double a, double b){
  return a + b;
}

class unary
{
public: int a,b,c;
public :
unary(int x, int y, int z)
 {
     a=x;
     b=y;
     c=z;
 }
   unary operator++()
   {
    a++;
    b++;
    c++;
   }
  void display()
  {
      cout<<a<<" "<<b<<" "<<c <<endl;
  }
};

// Function Overriding
class A
{
    public:
    int a = 5;
    int b = 6;
    virtual void add()
    {
        cout<<"Sum is:"<<a+b;
    }
};

class B : public A
{
    public:
    int x = 36;
    int y = 67;
    void add()
    {
        cout<<"sum is: " <<x+y;
    }
};

int main()
{
    cout << add(1, 2) << endl;
  cout << add(1.5, 2.5) << endl;
 
 unary obj(45,56,67);
  ++obj;
  obj.display();
 
    A *bptr;
    B bobj;
    bptr = &bobj;
    bptr -> add();
    return 0;

}
