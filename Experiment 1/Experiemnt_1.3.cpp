#include<iostream>
using namespace std;
class Time{
	int h,m,s;
		public:
		void acc(){
			cout<<"enter hours min sec:";
			cin>>h>>m>>s;
		}
		void disp(){
			cout<<(h*3600)+(m*60)+(s);
		}
};
int main(){
	Time s;
	s.acc();
	s.disp();
    return 0;
}