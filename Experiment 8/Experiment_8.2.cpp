#include<iostream>
using namespace std;
class ILogin{
		public:
		virtual void accept(){	}
		virtual void display(){	}
};
class EmailLogin:protected ILogin{
	string name,pass;
	public:
		void accept(){
			cout<<"\nEmail Login: \n enter name and password:";
			cin>>name>>pass;
		}
		void display(){
			cout<<"\nname:"<<name<<"\npassword:"<<pass;
		}
};
class MembershipLogin:protected ILogin{
	string name,pass;
	public:
void accept(){
			cout<<"\nMembership Login: \n enter name and password:";
			cin>>name>>pass;
		}
		void display(){
			cout<<"\nname:"<<name<<"\npassword:"<<pass;
		}
};
int main(){
	EmailLogin el;
	el.accept();
	el.display();
	MembershipLogin ml;
	ml.accept();
	ml.display();
    return 0;
}
