#include<iostream>
using namespace std;

int sum(int a, int b, int c=0, int d=0)
{
    return a+b+c+d;
}
int main()
{
    cout<<sum(3,4)<<",";
    cout<<sum(3,4,5)<<",";
    cout<<sum(5,6,7,8);
    return 0;
}
