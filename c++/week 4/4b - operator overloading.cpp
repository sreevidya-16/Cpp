#include <iostream>
using namespace std;
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
int main()
{
  unary obj(45,56,67);
  ++obj;
  obj.display();
}
