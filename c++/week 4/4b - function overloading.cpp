#include <iostream>
using namespace std;

// Function Overloading
int add(int a, int b){
  return a + b;
}

double add(double a, double b){
  return a + b;
}

int main()
{
  cout << add(1, 2) << endl;
  cout << add(1.5, 2.5) << endl;
}
