#include<iostream>
using namespace std;
class Student{
	int roll;
	float perc;
	public:
		void acc(){
			cout<<"enter roll percentage:";
			cin>>roll>>perc;
		}
		void disp(){
			this->acc();
			cout<<"roll:"<<roll<<"\npercentage:"<<perc;
		}
};
int main(){
	Student s;
	s.disp();
    return 0;
}
