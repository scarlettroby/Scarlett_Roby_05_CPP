#include<iostream>
using namespace std;
class City{
	int pop;
	string name ;
	public:
		void acc(){
			cout<<"enter name population:";
			cin>>name>>pop;
		}
		void disp(){
			cout<<"name:"<<name<<"\npopulation:"<<pop;
		}
};
int main(){
	City s[5];
	int i;
	for(i=0;i<5;i++){
			s[i].acc();
	}
for(i=0;i<5;i++){
			s[i].disp();
	}
return 0;
}
