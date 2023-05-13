#include<iostream>
using namespace std;
class student
{
	public:
		student()//default constructor
		{
			cout<<"default constructor called"<<"\n";
		}
		student(string n,int i,float g)//parameterized constructor
		{
			cout<<"parameter constructor called"<<"\n";
			name=n;
			id=i;
			gpa=g;
		}
		student(const student&o)//copy constructor
		{
			cout<<"copy constructor called "<<"\n";
			name=o.name;
			id=o.id;
			gpa=o.gpa;
		}
		~student()//destructor
		{
			cout<<"destructor called"<<"\n";
		}
void diaplay()//method
		{
			cout<<"Name: "<<name<<"\n";
			cout<<"ID: "<<id<<"\n";
			cout<<"G.P.A : "<<gpa<<"\n";
		}
	private:
		string name;
		int id;
		float gpa;
};
int main()
{
	student s1;// default constructor object
	s1.diaplay();
	student s2("sree",8,9.05);//parameterized constructor object
	s2.diaplay();
	student s3=s2;//copy constructor object
	s3.diaplay();

}
