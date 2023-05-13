#include<iostream>
using namespace std;
void swap(double &a,double &b)
{
	double temp;
	temp=a;
	a=b;
	b=temp;
}
int main()
{
	int a,b;
	float c,d;
	cout <<"enter 2 int : "<<"\n";
	cin>>a>>b;
	cout<<"enter 2 float: "<<"\n";
	cin>>c>>d;
	cout<<"before swapping a= %d,b= %d"<<a<<b;
	swap(&a,&b);
	swap(&c,&d);
	cout<<a<<"\n";
     cout<<b<<"\n";
	 cout<<c<<"\n";
	 cout<<d<<"\n";		
}
