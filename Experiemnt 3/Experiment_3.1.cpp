#include<iostream>
using namespace std;
class Book{
	int price;
	string name,au_name ;
	public:
		void acc(){
			cout<<"enter name price author:";
			cin>>name>>price>>au_name;
		}
		void disp(){
			cout<<"name:"<<name<<"\nprice:"<<price<<"\nauthor:"<<au_name;
		}
};
int main(){
	Book s;
	Book *p;
	p=&s;
	p->acc();
	p->disp();
    return 0;
}
