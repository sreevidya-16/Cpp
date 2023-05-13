#include <iostream>
using namespace std;

int main() {
    int a,b,temp;
    float c,d,temp2;
    cout <<"enter integer values a and b";
    cin >>a >>b;
    temp = a;
    a=b;
    b=temp;
    cout <<"numbers after swapping are: "<<a <<"\t" <<b ;
    cout<<"enter float values of a and b";
    cin >>c >>d;
    temp2=c;
    c=d;
    d=temp2;
    cout<<"float numbers after swapping are: "<<c <<"\t" <<d;
    return 0;
}
