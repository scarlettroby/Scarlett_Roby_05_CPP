#include<iostream>
using namespace std;
class Person{
	protected:
		string name;
		int age;
};
class Student:protected Person{
	protected:
		int roll;
		public:
			void acc(){
			cout<<"Enter your name age and roll no";
			cin>>name>>age>>roll;
		}
		void display(){
			cout<<"name:"<<name<<"\nage:"<<age<<"\nroll:"<<roll;
		}
};
int main(){
	Student s;
	s.acc();
	s.display();
    return 0;
}
