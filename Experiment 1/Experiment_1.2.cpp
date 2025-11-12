#include<iostream>
using namespace std;
class Book{
	int price,pgs;
	string name ;
	public:
		void acc(){
			cout<<"enter name price no. of pgs:";
			cin>>name>>price>>pgs;
		}
		void disp(){
			cout<<"name:"<<name<<"\nprice:"<<price<<"\npgs:"<<pgs;
		}
};
int main(){
	Book s;
	s.acc();
	s.disp();
    return 0;
}