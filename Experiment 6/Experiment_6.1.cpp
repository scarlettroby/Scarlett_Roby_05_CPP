#include<iostream>
using namespace std;
class Academics{
protected:
	float marks;
};
class Sports{
	protected:
	float score;	
};
class Result:protected Academics,protected Sports{
	public:
		void func(){
			cout<<"enter marks and score(out of 50):";
			cin>>marks>>score;
			float res=marks+score;
			cout<<"result:"<<res;
		}
};
int main(){
	Result r;
	r.func();
    return 0;
}