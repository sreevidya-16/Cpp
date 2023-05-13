#include<stdio.h>
#include<iostream>
using namespace std;
int division(int a, int b)
{
	if(b==0)
	{
		throw(b);
	}
	return (a/b);
}
int main()
{
	int x,y,z;
	cout<<"enter value of x:"<<endl;
	cin>>x;
	cout<<"enter value of y:"<<endl;
	cin>>y;
	try{
		z = division(x,y);
		cout<<z<<endl;
	}
	catch(int x)
	{
		printf("zero division error exception");
	}
	return 0;
}
