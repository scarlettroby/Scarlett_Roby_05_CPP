#include<iostream>
using namespace std;
class A{
	public:
		int v1,v2;
		void acc(){
			cout<<"Enter 2 values";
			cin>>v1>>v2;
		}
		friend void swap(A a1);
};
void swap(A a1){
	int temp;
	temp=a1.v1;
	a1.v1=a1.v2;
	a1.v2=temp;
	cout<<"v1:"<<a1.v1<<"v2:"<<a1.v2;
}
int main(){
	A a;
	a.acc();
	swap(a);
    return 0;
}