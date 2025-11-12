#include<iostream>
using namespace std;
class A{
	public:
		class B{
			int a=9;
			public:
				void func(){
				cout<<"a:"<<a;
				}
		};
};
int  main(){
	A :: B b;
	b.func();
    return 0;
}
