#include<iostream>
using namespace std;
class B;
class A{
	public:
		float v1;
		void acc(){
			cout<<"Enter a value";
			cin>>v1;
		}
		friend void greater(A a,B b);
};
class B{
	public:
		float v2;
		void acc(){
			cout<<"Enter a value";
			cin>>v2;
		}
		friend void greater(A a,B b);
};
void greater(A a,B b){
	if(a.v1>b.v2){
		cout<<"value of object1 is greater";
	}
	else
	{
			cout<<"value of object2 is greater";
	}
}
int main(){
	A r1;
	r1.acc();
	B r2;
	r2.acc();
	greater(r1,r2);
    return 0;
}
