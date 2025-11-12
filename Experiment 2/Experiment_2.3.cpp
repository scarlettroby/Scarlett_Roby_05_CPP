#include<iostream>
using namespace std;
class Staff{
	public:
		string name ,post;
		void acc(){
			cout<<"enter name post:";
			cin>>name>>post;
		}
		void disp(){
			cout<<"name:"<<name<<"\npost:"<<post;
		}
};
int main(){
	Staff s[5];
	int i;
	for(i=0;i<5;i++){
			s[i].acc();
			if(s[i].post=="HOD"){
				s[i].disp();
			}
	}
return 0;
}