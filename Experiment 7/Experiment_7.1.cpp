#include<iostream>
 using namespace std;
 class A{
 	public:
 		void func1(float l,float b){
 			cout<<"area:"<<l*b;
		 }
		 void func2(float l){
 			cout<<"\narea:"<<l*l;
		 }
 };
 int main(){
 	A a;
 	a.func1(2.5,5.6);
 	a.func2(3);
    return 0;
 }
