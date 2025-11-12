#include<iostream>
using namespace std;
class CollegeStudent{
	public:
		int sdt_id,clg_code;
};
class Test:virtual protected CollegeStudent{
	protected:
	float perc;
};
class Sport:virtual protected CollegeStudent{
	protected:
	float score;
};
class Result:protected Test,protected Sport{
	public:
			void acc(){
			cout<<"Enter your student id college id percentage and scores:";
			cin>>sdt_id>>clg_code>>perc>>score;
		}
		void display(){
			cout<<"std_id:"<<sdt_id<<"\nclg_code:"<<clg_code<<"\nperc:"<<perc<<"\nscore:"<<score;
		}
};
int main(){
	Result s;
	s.acc();
	s.display();
    return 0;
}