#include<iostream>
using namespace std;
class Result1{
	public:
		float marks;
		void acc(){
			cout<<"Enter your marks";
			cin>>marks;
		}
};
class Result2{
	public:
	float marks2;
		void acc(){
			cout<<"Enter your marks";
			cin>>marks2;
		}	
		void avg(Result1 &r1, Result2 &r2){
			float avg=(r1.marks+r2.marks2)/2;
			cout<<"avg:"<<avg;
		}
};
int main(){
	Result1 r1;
	r1.acc();
	Result2 r2;
	r2.acc();
	r2.avg(r1,r2);
    return 0;
}