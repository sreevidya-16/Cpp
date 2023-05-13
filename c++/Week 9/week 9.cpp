#include <iostream> 
using namespace std; 
template<class T1,class T2> 
class A 
{ 
 T1 a; 
 T2 b;
 public:
 A(T1 x,T2 y)
 {
 a=x;
 b=y;
 }
 void add()
 { 
 cout << "Addition of two numbers : " <<a+b<<endl ; 
 } 
}; 
 
int main() 
{ 
 int a,b;
 float x,y;
 cout<<"Enter a and b values";
 cin>>a>>b;
 cout<<"Enter x and y values";
 cin>>x>>y;
 A<int,int>S(a,b);
 A<float,float>B(x,y);
 A<int,float>C(a,x);
 A<float,int>D(y,b);
 S.add(); 
 B.add();
 C.add();
 D.add();
 return 0; 
} 