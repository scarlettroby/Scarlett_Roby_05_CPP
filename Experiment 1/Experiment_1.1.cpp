#include<iostream>
using namespace std;
class Student{
	int roll;
	string name,cl ;
	public:
		void acc(){
			cout<<"enter roll name class:";
			cin>>roll>>name>>cl;
		}
		void disp(){
			cout<<"roll:"<<roll<<"\nname:"<<name<<"\nclass:"<<cl;
		}
};
int main(){
	Student s;
	s.acc();
	s.disp();
    return 0;
}
