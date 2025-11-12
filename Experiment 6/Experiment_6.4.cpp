#include<iostream>
using namespace std;
class Employee{
	protected:
	int id;
	string name;	
};
class Manager:protected Employee{
	string dpt;
	public:
			void acc(){
			cout<<"Enter your name id and department";
			cin>>name>>id>>dpt;
		}
		void display(){
			cout<<"name:"<<name<<"\nid:"<<id<<"\ndepartment:"<<dpt;
		}
};
class Developer:protected Employee{
	string pl;
	public:
			void acc(){
			cout<<"Enter your name id and programming language";
			cin>>name>>id>>pl;
		}
		void display(){
			cout<<"name:"<<name<<"\nid:"<<id<<"\nprogramming language:"<<pl;
		}
};
int main(){
	Manager m;
	m.acc();
	m.display();
	Developer d;
	d.acc();
	d.display();
    return 0;
}
