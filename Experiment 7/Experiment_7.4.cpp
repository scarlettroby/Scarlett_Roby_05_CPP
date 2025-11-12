#include<iostream>
using namespace std;
class A{
	public:
			int a=5;
		int operator ++(){
			a=++a;
			return a;
		}
};
int main(){
	A s;
	cout<<++s;
    return 0;
}