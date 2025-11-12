#include<iostream>
using namespace std;
class Num{
	int num;
	public:
		Num(int n){
			num=n;
		}
		void func(){
			int sum;
			for(int i=1;i<num;i++){
				 sum=sum+i;
			}
			cout<<"sum:"<<sum;
		}
};
int main(){
	Num n(5);
	n.func();
    return 0;
}
